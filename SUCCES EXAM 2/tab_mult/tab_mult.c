#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



int mini_atoi(char *str)
{
    int i = 0;
    int res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;
}

void ft_putnbr(int nb)
{
    char c;
    if (nb > 9)
    {
        ft_putnbr(nb / 10);   
    } 
    c = (nb % 10) + '0';
    write (1 , &c , 1);
}

int main(int argc , char **argv)
{
    if (argc < 2)
    {
        write(1 , "\n" , 1);
        return (0);
    }
    int i = 0;
    if (argc == 2)
    {
        int nb = mini_atoi(argv[1]);
           while (++i <= 9)
           {
                ft_putnbr(i);
                write(1 , " " , 1);
                write(1 , "x" , 1);
                write(1 , " " , 1);
                ft_putnbr(nb);
                write(1 , " " , 1);
                write(1 , "=" , 1);
                write(1 , " " , 1);
                ft_putnbr(nb * i);
                write(1 , "\n" , 1);
           }
    }
}


