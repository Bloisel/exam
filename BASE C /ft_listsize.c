#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    t_list *lst;

    lst = begin_list;
    
    while (lst != NULL)
    {
        i++;
        lst = lst->next;   
    }
    printf("%d\n",i);
    return (i);
}


void    print_list(t_list *lst)
{
    t_list *tmp;

    tmp = lst;

    while (tmp != NULL)
    {
        printf("%s\n",tmp->data);
        tmp = tmp->next;
    }
}

int main()
{
    char *str = "bastien";
    t_list *a;
    a = malloc(sizeof(t_list));
    a->data = str;
    a->next = NULL;

    char *str1 = "loisel";
    t_list *b;
    b = malloc(sizeof(t_list));
    b->data = str1;
    b->next = NULL;

    char *str2 = "laurent";
    t_list *c;
    c = malloc(sizeof(t_list));
    c->data = str2;
    c->next = NULL;

    a->next = b;
    b->next = c;
    c->next = NULL;

    print_list(a);
    ft_list_size(a);
    return (0);
}