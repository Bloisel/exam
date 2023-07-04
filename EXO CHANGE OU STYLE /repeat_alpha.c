#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int count(char c , char **argv)
{
    int i = 0;
    int co = 0;
    char *str1 = "abcdefghijklmnopqrstuvwxyz";
    char *str2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    if (c >= 'A' && c <= 'Z')
    {
        while (c != str2[i])
        {
            i++;
            if (c == str2[i])
            {
                return (i);
                break;
            }
        }
    }
    else if (c >= 'a' && c <= 'z')
    {
        while (c != str1[i])
        {
            i++;
            if (c == str1[i])
            { 
                return (i);  
                break;
            }
        }
    }
    return (0);
}

int main(int argc , char **argv)
{
    int i = 0;
    int co = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z' && argv[1][i] != '\0')
            {
                co = count(argv[1][i] , &argv[1]);
                for (size_t j = 0; j <= co; j++)
                {
                    write(1, &argv[1][i] , 1);
                }
            }
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'z' && argv[1][i] != '\0')
            {
                co = count(argv[1][i] , &argv[1]);
                for (size_t j = 0; j <= co; j++)
                {
                    write(1, &argv[1][i] , 1);
                }
            }
            else 
                write(1 , &argv[1][i] , 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}