#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>



int main(int argc , char **argv)
{
    if (argc == 1 || !argv)
    {
        write(1 , "\n" , 1);
        return (0);
    }

    int i = 1;
    int j = 0;
    while (argv[i])
    {
        while(argv[i][j])
        {
            if (argv[i][j] && (argv[i][j] >= 'a' && argv[i][j] <= 'z'))
            {
                if (argv[i][j] && (argv[i][j + 1] == ' ' ||  argv[i][j + 1] == '\t' || argv[i][j + 1] == '\0'))
                {
                    argv[i][j] -= 32;
                    write(1 , &argv[i][j] , 1);
                    j++;
                }
                else 
                {
                    argv[i][j] -= 32;
                    write(1 , &argv[i][j] , 1);
                    j++;   
                }
            }
            else if (argv[i][j] && (argv[i][j] >= 'A' && argv[i][j] <= 'Z'))
            {
                write(1 , &argv[i][j] , 1);
                j++;
            }
            while (argv[i][j] && (argv[i][j] != ' ' && argv[i][j] != '\t'))
            {
                if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                {
                    argv[i][j] += 32;
                    write(1 , &argv[i][j] , 1);
                    j++;
                }
                else 
                {
                    write(1 , &argv[i][j] , 1);
                    j++;
                }
            }
            if (argv[i][j] && (argv[i][j] == ' ' || argv[i][j] == '\t'))
            {
                write(1 , &argv[i][j] , 1);
                j++;
            }
        }
        write(1 , "\n" , 1);
        j = 0;
        i++;
    }
    return (0);
}