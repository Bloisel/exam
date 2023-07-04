#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


void sort_int_tab(int *tab, unsigned int size)
{
    int tmp = 0;

    int i = 0;
    while (i < (size - 1))
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
    int tab[] = {68 , 5 , 90 , 2 , 1 , 678};
    unsigned int len = 6;
    sort_int_tab(tab , len);
    int i = 0;
    while (i < len)
    {
        printf("%d\n", tab[i]);
        i++;
    } 

}