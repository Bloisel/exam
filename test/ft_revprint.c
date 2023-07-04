

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int end = 0;
    int start = 0;
        if (argc == 2)
        {
            while (argv[1][i])
            {
                i++;
            }
            printf("%d\n",i);
            i--;
            while (i >= start)
            {
                write(1 , &argv[1][i] , 1);
                i--;
            }
        }
        write (1 , "\n" , 1);
}