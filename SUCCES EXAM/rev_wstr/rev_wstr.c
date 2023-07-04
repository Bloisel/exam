#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc , char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
            i++;
        while (i >= 0)
        {
            if (argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                i--;
            }
        int end = i;
            while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                i--;
            }
        int start = i + 1;
        int flag = start;
            while (end >= start)
            {
                write(1 , &argv[1][start] ,1);
                start++;
            }
            if (flag != 0)
            {
                write(1 , " " ,1);
            }
        }
    }
    write(1 , "\n" ,1);
}