#ifndef LIST_H
#define LIST_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    void *data;
    struct s_list *next; 
}   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
int cmp(void *a, void *b);
t_list *erase_first(t_list *lst);
void print_list(t_list *lst);
int ft_sum_list(t_list *lst);

#endif