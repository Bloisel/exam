#include <stdio.h>

int max(int *tab, unsigned int len)
{
    if (!tab)
        return (0);
    int i = 0;
    int resultat;

    resultat = tab[i];

    while (i < len)
    {
        if (resultat < tab[i])
        {
            resultat = tab[i];
        }
        i++;
    }
    return resultat;
}

int main()
{
    int tab[] = {127884736, 475764 , -33443, 887667499, 943874, 1 , -47864, 1};
    printf("%d\n",max(tab , 10));

}