#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc , char **argv)
{
    int i = 0;
    int j = 0;
    int flag = 0;
    if (argc < 2)
    {
        write (1 , "\n" , 1);
        return (0);
    }
    if (argc > 2)
    {
        while (argv[1][i])
        {
            write(1 , &argv[1][i] , 1);
            i++;
        }
    }
    if (argc == 2)
    {
        while (argv[1][i])
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
        int start = i;
            while (argv[1][i] != ' ' && argv[1][i] != '\t')
                i++;
        int end = i;
        end--;
            while (argv[1][i])
            {
                if (argv[1][i] == ' ' || argv[1][i] == '\t')
                    i++;
                while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
                {
                    write (1 , &argv[1][i] , 1);
                    i++;
                    if (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0')
                    {
                        write(1 , " " ,1);
                            if (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t' || argv[1][i + 1] == '\0' || argv[1][i] == '\0')
                                break;
                    }
                }
            }
        write(1 , &argv[1][start] , (end - start) + 1);
        }
    }
    write(1 , "\n" , 1);
}
