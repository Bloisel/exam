#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_swap(int *a , int *b)
{
    int *temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
}

    
int main()
{
    int x = 5;
    int y = 10;
    printf("Avant l'echange: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Apres l'echange: x = %d, y = %d\n", x, y);
    return 0;
}