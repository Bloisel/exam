#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char	*ft_itoa(int nbr)
{
    int j = 0;
    int nb = nbr;
    if (!nbr)
        return NULL;
    if (nbr < 0)
        j++;
    while (nb)
    {
        nb /= 10;
        j++; 
    }
    char *result = (char *)malloc(sizeof(char) * (j + 1));
    result[j] = '\0';
    if (!result)
        return NULL;
    if (nbr == 0)
    {
        result[0] = '0';
        return result;
    }
    if (nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while (nbr)
    {
        result[--j] = (nbr % 10) + '0';
        nbr /= 10;   
    }
    return result;    
}

int main()
{
    int nbr = -258;
    printf("%s\n",ft_itoa(nbr));
}