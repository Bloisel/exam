#include <unistd.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    t_list *tmp;
    tmp = begin_list;
    while (tmp != NULL)
    {
        i++;
        tmp = tmp->next;
    }
    return (i);
}