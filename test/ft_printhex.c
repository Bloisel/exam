#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int  ft_atoi(char *s)
{
    int result = 0;
    while (*s)
    {
        result = result * 10;
        result = result + *s - '0';
        ++s;
    }
    return (result);
}



void    convert_hexa(int nb)
{
    char *base = "0123456789abcdef";
    while (nb >= 16)
    {
        convert_hexa(nb / 16);
    }
    write (1 , &base[nb % 16] , 1);
}



int main(int argc , char **argv)
{
    char *base = "0123456789abcdef";

    if (argc == 2)
    {
        convert_hexa(ft_atoi(argv[1]));
    }
    write(1 , "\n", 1);
}