#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc , char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            if (argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                write(1 , &argv[1][i] , 1);
                i++;
                if (argv[1][i] == ' ' || argv[1][i] == '\t')
                    return (0);
            }
        }
    }
    write(1 , "\n", 1);
}