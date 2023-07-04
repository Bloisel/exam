#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int ft_atoi(char *str)
{
    int signe = 1;
    int result = 0;
    int i = 0;
    
    while (str[i])
    {
        while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
            i++;
        if (str[i] == ' ')
            {
                signe = -1;
                i++;
            }
        while (str[i] == ' ' || str[i] == '+')
            i++;
        while (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + str[i] - '0';
            i++;
        }
    }
    return (result * signe);
}

void    ft_putnbr(int nb)
{
    char c;

    if (nb > 9)
    {
        ft_putnbr(nb / 10);
    }
    c = nb % 10 + '0';
    write(1 , &c , 1);
}

int  is_sum(int nb)
{
    
    for (int i = 2; i * i <= nb; i++)
    {
        if (nb % i == 0)
            return (0);
    }
    return (1);
}

int main(int argc , char **argv)
{
    int sum = 0;

    if (argc == 2)
    {
        int res = ft_atoi(argv[1]);
        for (int i = 2; i <= res; i++)
        {
            if (is_sum(i) == 1)
                sum += i;
        }
        ft_putnbr(sum);
    }
    write(1 , "\n", 1);
}