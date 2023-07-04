#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *tmp;
    tmp = lst;
    int swap = 0;

    while(lst->next != NULL)
    {
        if ((cmp)(lst->data , lst->next->data) == 0)
            {
                swap = lst->data;
                lst->data = lst->next->data;
                lst->next->data = swap;
                lst = tmp;
            }
        else
            lst = lst->next; 
    }
    lst = tmp;
    return (lst);
}