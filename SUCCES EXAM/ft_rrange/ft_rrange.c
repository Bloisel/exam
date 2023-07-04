#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int tmp = 0;
    int flag = 0;
    if (end < 0 && start == 0)
    {
        tmp = start;
        start = end;
        end = tmp;
        tmp = 1;
    }
    int len = (end - start);
    int d = end;
    int *ret = (int *)malloc(sizeof(int) * len + 1);
    if (tmp != 0)
    {
        while (start <= d)
        {
            ret[i] = start;
            end--;
            i++;
            start++;
        }
        flag = 1; 
    }
    if (ret && flag == 0)
    {
        while (start <= d)
        {
            ret[i] = end;
            end--;
            i++;
            start++;
        }
    }
    return (ret);
}