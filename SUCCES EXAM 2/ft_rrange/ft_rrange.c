#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int len = 0;
    int i = 0;
    int j = 0;
    int k = end;
    int l = start;
    if (start > end)
       len = (start - end + 1); 
    if (end >= start)
        len = (end - start + 1);
    int *ret = (int *)malloc(sizeof(int) * len);
    if (!ret)
        return NULL;
    while (k >= start)
    {
        ret[i] = end;
        end--;
        start++;
        i++;
    }
    while (end <= start)
    {
        ret[i] = end;
        i++;
        end++;
    }
    return(ret); 
}