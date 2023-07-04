#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int     *ft_range(int start, int end)
{
    int i = 0;
    int len = ((end - start) + 1);
    int *res = (int *)malloc(sizeof(int) * len);
    if (!res)
        return (0);
    while (i < len)
    {
        if (start < end)
        {
           res[i] = start;
           start++;
           i++;
        }
        else
        {
            res[i] = start;
            start--;
            i++;
        }
    }
    return(res);
}

int main()
{
    int start = -1;
    int end = 2;
    int i = 0;
    int *tab = ft_range(start , end);
    end++;
    while (i <= end)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    return (0);
}