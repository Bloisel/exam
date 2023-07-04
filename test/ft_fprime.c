#include <stdio.h>
#include <stdlib.h>



int main(int argc , char **argv)
{
    int i = 0;
    int number;

    if (argc == 2)
    {
        i = 1;
        number = atoi(argv[1]);
        if (number == 1)
            printf("%d"\n);
        while (number >= ++i)
        {
            if (number % i == 0)
                printf("%d\n", i);
            if (number == i)
                break;
            printf("*");
            number /= i;
            i = 1;
        }


    }

}