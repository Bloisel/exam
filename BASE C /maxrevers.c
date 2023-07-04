#include <stdio.h>
#include <stdlib.h>



int maxreverse(int *tab, unsigned int len)
{
    int i = 0;
    int res = tab[i];
    if (!tab)
        return (0);
    while (i < len)
    {
        if (res < tab[i])
        {
            res = tab[i];
        }
        // if (tab[i] < res)
        // {
        //     tab[i] = res;
        //     // res = tab[i];
        // }
        i++;   
    }
    //res = tab[i];
    printf("index : %d\n",i);
    printf("valeur tableau : %d\n", tab[i]);
    return (res);
}



int main()
{
    int tab1[] = {1566 , 958585 , 0 , -5467, -959945, 76878457};
    int resultat = maxreverse(tab1 , 5);
    printf("resultat premier %d\n", resultat);
    // int tab2[] = {};
    // int resultat2 = maxreverse(tab2, 0);
    // printf("%d\n", resultat2);
    return (0);
}