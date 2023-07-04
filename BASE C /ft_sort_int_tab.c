#include <stdio.h>
#include <stdlib.h>



// It must sort (in-place) the 'tab' int array, that contains exactly 'size'
// members, in ascending order.

// Doubles must be preserved.

// Input is always coherent.

void sort_int_tab(int *tab, unsigned int len)
{
    int i = 0;
    int tmp = 0;
    while (i < (len - 1))
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}

int main()
{
    int i = 0;
    int tab[] = {18 , 0 , -97 , -2 , -82};
    while (i < 5)
    {
        printf("tab de [%d] est = a [%d]\n",i ,tab[i]);
        i++;
    }
    sort_int_tab(tab , 5);
    i = 0;
    printf("------------------------------------------------------------\n");
    while (i < 5)
    {
        printf("tab de [%d] est = [%d]\n",i ,tab[i]);
        i++;
    }
    printf("------------------------------------------------------------\n");
}
