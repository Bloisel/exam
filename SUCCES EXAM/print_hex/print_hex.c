#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int ft_atoi(char *str)
{
    int result = 0;
    int signe = 1;
    int i = 0;

    while (str[i])
    {
        while (str[i] == ' ' && str[i] >= 9 && str[i] <= 13)
            i++;
        if (str[i] == '-')
        {
            signe = -1;
            i++;
        }
        if (str[i] == '+' || str[i] == '-')
            i++;
        while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
        {
            result = (result * 10) + str[i] - '0';
            i++;
        }
    }
    return (result * signe);
}


void   ft_putnbr_base(int nb)
{
    char *base = "0123456789abcdef";
    if (nb >= 16)
    {
        ft_putnbr_base(nb / 16);
    }
    write(1 , &base[nb % 16], 1);
}



int main(int argc , char **argv)
{
    int i = 0;
    int nb = 0;

    if (argc == 2)
    {
        nb = ft_atoi(argv[1]);
        ft_putnbr_base(nb); 
    }
    write(1, "\n", 1);    
    return (0);
}