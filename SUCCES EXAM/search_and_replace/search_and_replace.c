#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int check_ar(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
        if (i > 1)
        {
            return (0);
        }
    }
    return (1);
}

int main(int argc , char **argv)
{
    int i = 0;
    if (((argc == 4) && check_ar(argv[2]) == 1) && check_ar(argv[3]) == 1)
    {
        while (argv[1][i])
        {
            if (argv[1][i] == argv[2][0])
            {
                argv[1][i] = argv[3][0];
            }
            write(1 , &argv[1][i] , 1);
            i++;
        }
    }
    write(1 , "\n" , 1);
}