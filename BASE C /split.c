#include <stdio.h>
#include <stdlib.h>


char *ft_strncpy(char *s1, char *s2, int n)
{
    int i = 0;
    int j = 0;

    while (i < n && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}


char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k  = 0;
    int wc = 0;

    while (str[i])
    {
        while (str[i] == '\t' || str[i] == ' ')
            i++;
        if (str[i])
            wc++;
        while (str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
            i++;
    }
    char **res = (char **)malloc(sizeof(char *) * (wc + 1));
    if (res == NULL)
        return (0);
    i = 0;
    while (str[i])
    {
        while (str[i] == '\t' || str[i] == ' ')
            i++;
        j = i;
        while (str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
            i++;
        if (i > j)
        {
            res[k] = (char *)malloc(sizeof(char *) * (i - j) + 1);
            ft_strncpy(res[k], &str[j], (i - j) + 1);
            k++;
        }
    }
    res[k] = NULL;
    return (res);
}

int main()
{
    // Chaîne de caractères à diviser
    char *str = "ba st ie n";

    // Appel de la fonction ft_split pour diviser la chaîne en mots
    char **res = ft_split(str);

    // Parcourt le tableau de pointeurs vers les mots et affiche chaque mot
    for (int i = 0; res[i] != NULL; i++)
    {
        printf("%s\n", res[i]);
    }

    // Libère la mémoire allouée pour res
    for (int i = 0; res[i] != NULL; i++)
    {
        free(res[i]);
    }
    free(res);

    return 0;
}