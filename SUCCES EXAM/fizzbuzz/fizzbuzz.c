#include <unistd.h>

void    ft_wputnbr(int nb)
{
    if (nb > 9)
    {
        ft_wputnbr(nb / 10);
    }
    char c = (nb % 10) + '0';
    write(1 , &c , 1);
}

int main()
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1 , "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1 , "fizz" , 4);
        else if (i % 5 == 0)
            write(1 , "buzz" , 4);
        else
            ft_wputnbr(i);
        i++;
        write(1 , "\n", 1);
    }    
}