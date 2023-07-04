#include "list.h"
#include <stdlib.h>

int    ft_sum_list(t_list *lst)
{
    t_list *tmp;
    int sum = 0;
    int ret = 0;

    tmp = lst;
    if (!lst)
        return sum;
    while (tmp != NULL)
    {
        sum = tmp->data;
        tmp = tmp->next;
        ret += sum;
    }
    return (ret);
}


// void   print_list(t_list *lst)
// {
//     if (!lst)
//         return;
//     while (lst != NULL)
//     {
//         printf("%d\n",lst->data);
//         lst = lst->next;
//     }
// }

t_list *erase_first(t_list *lst)
{
    if (lst == NULL) {
        EXIT_FAILURE;
    }

    t_list *tmp = lst->next;
    free(lst);
    lst = tmp;
    return (tmp);
}

// int cmp (void *a , void *b)
// {
//     int y = 0;
//     int x = 0;
//     y = *(int *)a;
//     x = *(int *)b;
//     if (x == y)
//         return (0);
//     else 
//         return (1);    
// }

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
		return;
    t_list *tmp = *begin_list;

    if (cmp(tmp->data , data_ref) == 0)
    {
        *begin_list = tmp->next;
        free(tmp);
        ft_list_remove_if(begin_list, data_ref , cmp);
    }
    tmp = *begin_list;
    ft_list_remove_if(&tmp->next , data_ref, cmp);
}

int main()
{
    int x = 42;
    int y = 8;
    int z = 10;
    
    t_list *a = malloc(sizeof(t_list));
    a->next = 0;
    a->data = 42; 

    t_list *b = malloc(sizeof(t_list));
    b->next = 0;
    b->data = 8;

    t_list *c = malloc(sizeof(t_list));
    c->next = 0;
    c->data = 10;

    a->next = b;
    b->next = c;


    printf("_____________________________________________\n");
    
    int A = 42;
    void *data_ref = &A;

    ft_list_remove_if(&a, data_ref, &cmp);

    printf("Liste après suppression :\n");
    //print_list(a); 
    return (0);
}