#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nb)
{
    int n = nb;
    int len = 0;
    if (n < 0 || n == 0)
    {
        len++;
    }
    while (n)
    {
        len++;
        n /= 10;
    }
    char *ret = malloc(sizeof(char) * len + 1);
    if (!ret)
        return NULL;
    ret[len] = '\0';
    if (nb  == 0)
    {
        ret[0] = '0';
        return (ret);
    }
    if (nb < 0)
    {
        ret[0] = '-';
        nb = -nb;
    }
    while (nb)
    {
        ret[--len] = (nb % 10) + '0';
        nb /= 10;
    }
    return (ret);
}