#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc , char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        if (argv[1][i + 1] == '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
        {
            write (1 , &argv[1][i] , 1);
            write(1, "\n" , 1);
            return (0);
        }
        while (argv[1][i])
            i++;
        i--;
        while (i > 0 && argv[1][i] == ' ' || argv[1][i] == '\t')
            i--;
        int end = i;
        while (i > 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
            i--;
        int start = i + 1;
        if (end >= start)
        {
            write(1 , &argv[1][start] , (end - start) + 1);
        }
    }
    write(1 , "\n" , 1);
}