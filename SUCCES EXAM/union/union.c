#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int checker(char *s1, char c, int len)
{
    int i = 0;
    while (s1[i] && (i < len || len == -1))
    {
        if (s1[i] == c)
            return (1);
        i++;
    }
    return (0);
}


int main(int argc , char **argv)
{
    if (argc <= 1)
    {
        write(1 , "\n" ,1);
        return (0);
    }

    int i = 0;
    int j = 0;
    int flag = 0;
    if (argc >= 2)
    {
        while (argv[1][i])
        {
            if (checker(argv[1], argv[1][i] , i) == 0)
            {
                write(1 , &argv[1][i] , 1);
            }
            i++;
        }
        while (argv[2][j])
        {
            if ((checker(argv[1] , argv[2][j] , -1) == 0) && checker(argv[2] , argv[2][j] , j) == 0)
            {
                write(1 , &argv[2][j] , 1);
            }
            j++;
        }
    }
    write(1 , "\n" , 1);
}