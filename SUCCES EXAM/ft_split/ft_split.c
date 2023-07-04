#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



char *ft_strncpy(char *s1 , char *s2, unsigned int n)
{
    int i = 0;
    while (s2[i] && i < n)
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
        while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
        {
            i++;
        }
        if (str[i])
            wc++;
        while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            i++;
        }
    }
    char **result = (char **)malloc(sizeof(char *) * (wc + 1));
    if (!result)
        return NULL;
    i = 0;
    while (str[i])
    {
        while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
        {
            i++;
        }
        j = i;
        while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            i++;
        }
        if (i > j) 
        {
            result[k] = (char *)malloc(sizeof(char)  * (i - j) + 1);
            ft_strncpy(result[k++] , &str[j], (i - j));
        }
    }
    result[k] = NULL;
    return (result);
}