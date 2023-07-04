#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int posi(char c, char **argv)
{
    int i = 0;
    int pos = 0;
    char *str = "abcdefghijklmnopqrstuvwxyz";
    char *str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (argv[1][i])
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            while (str[i] != c)
            {
                i++;
                if (str[i] == c)
                    break;
            }
            pos = i;
            return (pos);
        }
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            while (str1[i] != c)
            {
                i++;
                if (str1[i] == c)
                    break;
            }
            pos = i;
            return (pos);
        }
        i++;
    }
    return (pos);
}

int main(int argc , char *argv[])
{
    int i = 0;
    int len = 0;
    int j = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                len = posi(argv[1][i] , argv);
                for (j = 0; j <= len; j++)
                {
                    write (1, &argv[1][i] , 1);
                }
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
               
                len = posi(argv[1][i] , argv);
                for (j = 0; j <= len; j++)
                {
                    write (1, &argv[1][i] , 1);
                }
            }
            else
                write (1 , &argv[1][i] , 1);
            i++;
        }
        write (1 , "\n" , 1);
    } 

}