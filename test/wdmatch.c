#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1 , &str[i] , 1);
        i++;
    }
}

int main(int argc , char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    if (argc == 3)
    {
        while (argv[1][i])
        {
            i++;
        }
        while (argv[2][j])
        {
            if (argv[1][k] == argv[2][j] && k <= i)
            {
                k++;
                if (i == k)
                {
                    ft_putstr(argv[1]);
                    write(1 , "\n" , 1);
                    return (0);
                }
            }
            j++;
        }
    }
    write(1 , "\n" , 1);
    return(0);
}