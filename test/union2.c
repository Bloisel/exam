#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>




int check(char c , char *str, int len)
{
    int i = 0;
    while (i < len)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}


int main(int argc , char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    if (argc == 3)
    {
        while (argv[1][i])
            i++;
        while (argv[2][j])
        {
            argv[1][i] = argv[2][j];
            i++;
            j++;
        }
        i--;
        while (i >= k)
        {
            if (check(argv[1][k], argv[1], k) == 1)
                write(1 , &argv[1][k] , 1);
            k++;
        } 
    }
    write(1 , "\n", 1);
}