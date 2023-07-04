#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc , char **argv)
{
    if (argc == 2)
    {
        int i = 2;
        int nb = atoi(argv[1]);
        int nb1 = nb;
        if (nb == 1)
        {
            printf("1\n");
            return(0);
        }
        if (nb < 0)
        {
            printf("\n");
            return(0);
        }
        while (i <= nb)
        {
            if (nb % i == 0)
            {
                printf("%d", i);
                if (nb == i)
                    break;
                printf("*");
                nb1 /= i;
                i = 2;
            }
            nb = nb1;
            i++;
        }
    }
    printf("\n");
}