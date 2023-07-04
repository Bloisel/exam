#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		max(int* tab, unsigned int len)
{
    int temp = 0;
    int i;
    i = 0;
    int result = tab[i];

    while (i < len)
    {
        while (result < tab[i])
            result = tab[i];
        i++;
    }
    return result;
}


int main()
{
    int tab[4] = {20 , 50 , 80 , 106};
    int max1 = 0;
    max1 = max(tab , 4);
    printf("%d\n", max1);
}