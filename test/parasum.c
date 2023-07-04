#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void ft_putnbr(int nb)
{
   while (nb >= 10)
   {
        ft_putnbr(nb / 10);
   }
   char c = nb % 10 + '0';
   write (1 , &c , 1); 
}

int main(int argc , char **argv)
{
    int i = 0;
    (void)argv;
    ft_putnbr(argc - 1);
    write(1, "\n", 1);
}