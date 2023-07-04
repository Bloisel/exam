#include <stdlib.h>
#include "list.h"

typedef struct s_list
{
    void *data;
    struct s_list *next;
} t_list;

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    int swap;
    t_list *tmp;

    tmp = lst;
    while (lst->next != '\0')
    {
        if (((*cmp)(lst->data, lst->next->data))== 0)
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




















    if begin et *begin

    t_list *cur;

    t_list *cur = *begin 
    if (cmp(cur->data , data_ref) == 0)
        *begin_list = cur->next
        free cur 
        ft_list 
    

    *begin_list = cur->next
    ft_ &cur-> ,     , 




void	ft_list_foreach(t_list *begin_list, void (*f)(void *))

t_list *tmp 

tmp = begin list 

while list_tmp 
    *f = lst->dat 
    lst->tmp = tmp-> next   








}
















typedef struct s_list
{
    void *data;
    struct s_list *next;
} t_list;


t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    int swap;
    t_list *tmp;

    while (dta->next != NULL)
    {
        if (cmp(lst->data, lst->data->next) == 0)
        {
            swap = lst->data;
            lst->data = lst->data->next;
            lst->data->next = swap; 
            lst = tmp;
        }
        else 
            lst = lst->next;
    }
    return (lst);
}










