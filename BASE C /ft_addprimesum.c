#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



void    ft_putnbr(int nb)
{


}

int is_sum(int num)
{
    for (int i = 2; i * i <= num ; i++)
    {
        if (num % i == 0)
            return (0);
    }
    return (1);
}

int main(int argc , char **argv)
{
    int sum = 0;
    int i = 0;

    if (argc == 2)
    {
        int number = atoi(argv[1]);
        for (int i = 2; i <= number ; i++)
            {
                if (is_sum(i))
                    sum += i; 
            }
    printf("%d\n",sum);
    }
    return (0);
}