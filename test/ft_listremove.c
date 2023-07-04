#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}   t_list;


int cmp_int(void *data , void *data1)
{
    int nb1 = *(int *)data;
    int nb2 = *(int *)data1;
    return nb1 != nb2;
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
        return;
    t_list *cur = *begin_list;
    if (cmp(cur->data , data_ref) == 0)
    {
        *begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list , data_ref , cmp);   
    }
    cur = *begin_list;
    ft_list_remove_if(&cur->next , data_ref , cmp);
}

void    print_list_int(t_list *lst)
{
    while (lst)
    {
        printf("%d\n", *(int *)lst->data);
        lst = lst->next;
    }
}

// void    print_list_double_int(t_list **lst)
// {
//     t_list *tmp = *lst;
//     while (tmp)
//     {
//         printf("%d\n", *(int *)tmp->data);
//         tmp = tmp->next;
//     }
// }


// void	print_list(t_list **begin_list)
// {
// 	t_list *cur = *begin_list;
// 	while (cur != 0)
// 	{
// 		printf("%s\n", cur->data);
// 		cur = cur->next;
// 	}
// }

// int		main(void)
// {
// 	char straa[] = "String aa";
// 	t_list *aa = malloc(sizeof(t_list));
// 	aa->next = 0;
// 	aa->data = straa;

// 	char strbb[] = "String bb";
// 	t_list *bb = malloc(sizeof(t_list));
// 	bb->next = 0;
// 	bb->data = strbb;

// 	char strcc[] = "String cc";
// 	t_list *cc = malloc(sizeof(t_list));
// 	cc->next = 0;
// 	cc->data = strcc;

// 	char strdd[] = "String dd";
// 	t_list *dd = malloc(sizeof(t_list));
// 	dd->next = 0;
// 	dd->data = strdd;

// 	aa->next = bb;
// 	bb->next = cc;
// 	cc->next = dd;

// 	t_list **begin_list = &aa;

// 	print_list(begin_list);
// 	printf("----------\n");
// 	ft_list_remove_if(begin_list, straa, strcmp);
// 	print_list(begin_list);
// }


int main()
{
    int a = 42;
    int b = 31;
    int c = 12;
    int d = 42;

    t_list *aa = malloc(sizeof(t_list));
    aa->data = &a;
    aa->next = NULL;

    t_list *bb = malloc(sizeof(t_list));
    bb->data = &b;
    bb->next = NULL;

    t_list *cc = malloc(sizeof(t_list));
    cc->data = &c;
    cc->next = NULL;

    t_list *dd = malloc(sizeof(t_list));
    dd->data = &d;
    dd->next = NULL;

    aa->next = bb;
    bb->next = cc;
    cc->next = dd;
    dd->next = NULL;

    print_list_int(aa);
    t_list *begin_list = aa;
    ft_list_remove_if(&begin_list , &a , cmp_int);
    printf("_____________________________\n");
    print_list_int(begin_list);


}



// void    print_list_char(t_list *lst)
// {
//     while (lst)
//     {
//         printf("%c\n", *(char *)lst->data);
//         lst = lst->next;
//     }
// }