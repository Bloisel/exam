#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int check(char c, char *str, int len)
{
    int i = 0;
    while (str[i] && i < len || len == -1)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}


int main(int argc , char **argv)
{
    int i = 0;

    if (argc == 3)
    {
        while (argv[1][i])
        {
            if (!check(argv[1][i] , argv[1], i) && check(argv[1][i], argv[2], -1))
                write(1 , &argv[1][i], 1);
            i++;   
        }
    }
    write(1 , "\n", 1);
}