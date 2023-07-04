
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


typedef struct s_list t_list;

struct s_list
{
    t_list *next;
    int    data;
    
};

int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *tmp = lst;
    int swap = 0;

    while (lst->next != NULL)
    {
        if (cmp(lst->data , lst->next->data) == 0)
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


void    print_list(t_list *lst)
{
    while (lst->next != NULL)
    {
        printf("%d\n",lst->data);
        lst = lst->next;
    }
}

int main()
{
    int a = 42;
    int b = 10;
    int c = 5;
    int d = 3;
    int e = 95;

    t_list *aa = malloc(sizeof(t_list));
    aa->data = a;
    aa->next = NULL;

    t_list *bb = malloc(sizeof(t_list));
    bb->data = b;
    bb->next = NULL;

    t_list *cc = malloc(sizeof(t_list));
    cc->data = c;
    cc->next = NULL;

    t_list *dd = malloc(sizeof(t_list));
    dd->data = d;
    dd->next = NULL;

    t_list *ee = malloc(sizeof(t_list));
    ee->data = e;
    ee->next = NULL;

    aa->next = bb;
    bb->next = cc;
    cc->next = dd;
    dd->next = ee;
    ee->next = NULL;

    print_list(aa);
    printf("___________________________________________\n");
    sort_list(aa , &ascending);
    print_list(aa);
}