#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc , char **argv)
{
    int i = 2;
    int nb = 0;
    if (argc == 2)
    {
        int nb = atoi(argv[1]);
        int n = nb;
        if (nb == 1)
            printf("1");
        while (i <= nb)
        {
            if (nb % i == 0)
            {
                printf("%d",i);
                if (nb == i)
                    break;
                printf("*");
                nb = (n /= i);
                i = 2;

            }
            n = nb;
            i++;
        }
    }    
    printf("\n");
    return (0);
}