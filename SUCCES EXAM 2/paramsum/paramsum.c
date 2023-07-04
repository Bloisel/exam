#include <unistd.h>


void    ft_puntnbr(int nb)
{
    if (nb > 9)
    {
        ft_puntnbr(nb / 10);
    }
    char c = (nb % 10) + 48;
    write(1 , &c , 1);
}

int main(int argc , char **argv)
{
    if (argc == 1)
    {
        write(1 , "0" , 1);
        write(1 , "\n" , 1);
        return (0);
    }
    int i = 1;
    char c;
    while (argv[i])
        i++;
    i--;
    ft_puntnbr(i);
    write(1 , "\n" , 1);
    return (0); 
}