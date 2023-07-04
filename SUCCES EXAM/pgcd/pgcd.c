#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int pgcd(int a, int b) 
{
    int r;
    while (b != 0) 
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main (int argc , char **argv)
{
    if (argc != 3)
    {
        printf("\n");
        return (0);
    }
    int nb = atoi(argv[1]);
    int nb2 = atoi(argv[2]);
    if (0 >= nb || 0 >= nb2)
    {
        printf("\n");
        return(0);
    }
    int result = pgcd(nb , nb2);
    printf("%d\n" ,result);
}