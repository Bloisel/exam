#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char **argv)
{
    int i = 0;
    int start = 0;
    int len = 0;
    int end = 0;
    int tmp = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            i++;   
        }
        len = i;
        while (argv[1][--i])
            {
                if (argv[1][i] != '\t' && argv[1][i] != ' ')
                    break;
            }
        end = i;
        while (argv[1][--i])
            {
                if (argv[1][i] == '\t' || argv[1][i] == ' ')
                    break;
            }
        i++;
        start = i;
    }
    tmp = (end - start);
    tmp++;
    write(1 , &argv[1][start], (tmp));
    write (1 , "\n", 1);
}