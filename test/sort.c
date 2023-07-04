

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int temp = 0;

    while (i < (size - 1))
    {
        if (tab[i] > tab[i + 1])
        {
           temp = tab[i];
           tab[i] = tab[i + 1];
           tab[i + 1] = temp;
           i = 0; 
        }
        else 
            i++;
    }



}

int main()
{
    int i = 0;
    int tab1[6] = {15, 204, 5085, 54123, 2, 66467};
    sort_int_tab(tab1 , 6);

    while (i < 6)
    {
        printf("%d\n", tab1[i]);
        i++;
    }
}
    