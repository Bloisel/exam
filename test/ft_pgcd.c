#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int pgcd(int a , int b)
{
    int temp;

    while (b != 0)
    {
        temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

int main()
{
    int a;
    int b;

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("%d\n",pgcd(a, b));
}