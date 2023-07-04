#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *ft_itoa(int nbr)
{
    int nb = nbr;
    int len = 0;
    int i = 0;
    if (0 >= nb)
    {
        len++;
    }
    while (nb)
    {
        nb /= 10;
        len++;
    }
    char *res = (char *)malloc(sizeof(char *) * len + 1);
    res[len] = '\0';
    if (res == NULL)
    {
        return NULL;
    }
    if (nbr == 0)
    {
        res[0] = '0';
        return (res);
    }
    if (nbr < 0)
    {
        res[0] = '-';
        nbr = -nbr;
    }
    while (nbr)
    {
        res[--len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return (res);
}
