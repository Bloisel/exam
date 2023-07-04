#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int ft_atoi(char *str)
{
    int i = 0;
    int signe = 1;
    int result = 0;
    while (str[i])
    {    
        while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
            i++;
        if (str[i] == '-')
            {
                signe = -1;
                i++;
            }
        while (str[i] == '-' || str[i] == '+')
            i++;
        while (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + str[i] - '0';
            i++;
        }
    }
    return (result * signe);
}

void ft_putnbr(int nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
    }
    char c = (nb % 10) + '0';
    write(1 , &c , 1);
}

int is_sum(int nb)
{
    int i;
    for (i = 2; i * i <= nb; i++)
    {
        if (nb % i == 0)
        {
            return (1);
        }
    }
    return (0);
}

int main(int argc , char **argv)
{
    int i = 2;
    int nb = 0;
    int res = 0;
    if (argc == 2)
    {
        nb = ft_atoi(argv[1]);
        for (i = 2; i <= nb; i++)
        {
           if (is_sum(i) == 0)
                res += i;
        }
    }
    ft_putnbr(res);
    write(1 , "\n" , 1);
}