#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *s1 , char *s2 , int nb)
{
    int i = 0;
    while (s2[i] && i < nb)
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
    int wc = 0;
    int j = 0;
    int k = 0;

    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i])
            wc++;
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
            i++; 
    }
    char **ret = malloc(sizeof(char *) * wc + 1);
    if (!ret)
        return NULL;
    i = 0;
    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        j = i;
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
            i++;
        if (i > j)
        {
            ret[k] = malloc(sizeof(char) * (i - j) + 1);
            ft_strcpy(ret[k++] , &str[j] , (i - j));
        }
    }
    ret[k] = NULL;
    return (ret);
}
