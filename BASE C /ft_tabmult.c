#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int ft_atoi(char *str)
{
    int result = 0;
    int signe = 1;
    int i = 0;

    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == ' ')
        {
            signe = -1;
            i++;
        }
    while (str[i] == '+' || str[i] == ' ')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * signe);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-", 1);
        write (1, "2147483648" , 10);
    }
    if (nb < 0)
    {
        write(1, "-" , 1);
        nb = (nb * -1);
    }
    if (nb > 9)
        ft_putnbr(nb / 10);
    char c = nb % 10 + '0';
    write (1 , &c , 1);
}

int main(int argc , char **argv)
{
    int i = 1;
    if (argc == 1)
    {
        write (1, "\n", 1);
        return (0);
    }

    int nb = atoi(argv[1]);
    while (i <= 9)
    {
        ft_putnbr(i);
        write(1, " ", 1);
        write(1 , "x", 1);
        write(1, " ", 1);
        ft_putnbr(nb);
        write(1, " ", 1);
        write(1 , "=", 1);
        write(1, " ", 1);
        ft_putnbr(nb * i);
        write(1, "\n", 1);
        i++;
    }
    return(0);
}
