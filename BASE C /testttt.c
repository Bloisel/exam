#include "list.h"
#include <stdlib.h>
#include <stdio.h>


void print_list(t_list *lst)
{
    printf("Liste : ");
    while (lst != NULL)
    {
        int *data = (int *)lst->data;
        printf("%d ", *data);
        lst = lst->next;
    }
    printf("\n");
}

// void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
// {
//     t_list *current = *begin_list;
//     t_list *previous = NULL;

//     while (current != NULL)
//     {
//         if (cmp(current->data, data_ref))
//         {
//             if (previous == NULL)
//                 *begin_list = current->next;
//             else
//                 previous->next = current->next;

//             t_list *tmp = current;
//             current = current->next;
//             free(tmp);
//         }
//         else
//         {
//             previous = current;
//             current = current->next;
//         }
//     }
// }

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return;

	t_list *cur = *begin_list;

	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	cur = *begin_list;
	ft_list_remove_if(&cur->next, data_ref, cmp);
}

int cmp(void *a, void *b)
{
    return (*(int *)a == *(int *)b);
}

int main(void)
{
    t_list *a = malloc(sizeof(t_list));
    int *data = malloc(sizeof(int));
    *data = 4;
    a->next = NULL;
    a->data = data;

    t_list *b = malloc(sizeof(t_list));
    data = malloc(sizeof(int));
    *data = 42;
    b->next = NULL;
    b->data = data;

    t_list *c = malloc(sizeof(t_list));
    data = malloc(sizeof(int));
    *data = 42;
    c->next = NULL;
    c->data = data;

    t_list *d = malloc(sizeof(t_list));
    data = malloc(sizeof(int));
    *data = 23;
    d->next = NULL;
    d->data = data;

    t_list *e = malloc(sizeof(t_list));
    data = malloc(sizeof(int));
    *data = 42;
    e->next = NULL;
    e->data = data;

    t_list *f = malloc(sizeof(t_list));
    data = malloc(sizeof(int));
    *data = 16;
    f->next = NULL;
    f->data = data;

    t_list *g = malloc(sizeof(t_list));
    data = malloc(sizeof(int));
    *data = 15;
    g->next = NULL;
    g->data = data;

    t_list *h = malloc(sizeof(t_list));
    data = malloc(sizeof(int));
    *data = 42;
    h->next = NULL;
    h->data = data;

    t_list *i = malloc(sizeof(t_list));
    data = malloc(sizeof(int));
    *data = 8;
    i->next = NULL;
    i->data = data;

    t_list *j = malloc(sizeof(t_list));
    data = malloc(sizeof(int));
    *data = 42;
    j->next = NULL;
    j->data = data;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = i;
    i->next = j;
    j->next = NULL;

    printf("Liste originale :\n");
    print_list(a);

    int ref = 42;
    ft_list_remove_if(&a, &ref, &cmp);

    printf("Liste après suppression :\n");
    print_list(a);
}