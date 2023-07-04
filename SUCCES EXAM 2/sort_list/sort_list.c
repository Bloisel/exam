#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "list.h"

// typedef struct s_list t_list;

// struct s_list
// {
// 	int     data;
// 	t_list  *next;
// };

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *tmp;

    tmp = lst;
    int swap = 0;
    while (lst->next != NULL)
    {
        if ((cmp)(lst->data , lst->next->data) == 0)
        {
            swap = lst->next->data;
            lst->next->data = lst->data;
            lst->data = swap;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return (lst);
}


// void    print_list(t_list *tmp)
// {
//     t_list *tp;

//     tp = tmp;
//     while (tp != NULL)
//     {
//         printf("%d\n",tp->data);
//         tp = tp->next;
//     }
// }


// int main()
// {
//     t_list *a;
//     a = malloc(sizeof(t_list));
//     a->data = 42;
//     a->next = NULL;

//     t_list *b;
//     b = malloc(sizeof(t_list));
//     b->data = 10;
//     b->next = NULL;

//     t_list *c;
//     c = malloc(sizeof(t_list));
//     c->data = 9;
//     c->next = NULL;

//     t_list *d;
//     d = malloc(sizeof(t_list));
//     d->data = 15;
//     d->next = NULL;

//     t_list *e;
//     e = malloc(sizeof(t_list));
//     e->data = 12;
//     e->next = NULL;

//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     e->next = NULL;

//     print_list(a);
//     printf("____________________________________________________________________\n");
//     sort_list(a , &ascending);
//     printf("____________________________________________________________________\n");
//     print_list(a);
// }