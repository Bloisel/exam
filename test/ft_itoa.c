#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nombre)
{
    int nbr = nombre;
    int len = 0;
   
    while (nbr)
    {
        nbr /= 10;
        len++;
    }
   
    char *result = (char *)malloc(sizeof(char) * (len + 1));
    result[len] = '\0';
    if (nombre < 0)
    {
        result[0] = '-';
        nombre = -nombre;
    }
    while (nombre)
    {
        result[--len] = (nombre % 10) + '0';
        nombre /= 10;
    }
    return (result);
}

int main()
{
    int nrb1 = 234;
    printf("%s\n",ft_itoa(nrb1));
}