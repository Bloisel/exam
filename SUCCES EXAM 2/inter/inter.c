#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int main(int argc , char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int stoppeur = 0;

    if (argc == 3)
    {
        char *str = argv[1];
        while (argv[1][j])
        {
            i = 0;
            stoppeur = 0;
            k = 0;
            while (str[i] && i < j)
            {
                if (str[i] == argv[1][j])
                {
                    stoppeur = 1;
                }
                i++;
            }
            while (argv[2][k] && stoppeur == 0)
            {
                if (argv[2][k] == argv[1][j])
                {
                    write(1 , &argv[1][j] , 1);
                    break;
                }
                k++;
            }
            j++;
        }
    }
    write(1 , "\n" , 1);
}