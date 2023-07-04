#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    while (src[len])
    {
        len++;
    }
    char *res = (char *)malloc(sizeof (char *) * len + 1);
    if (src != NULL)
    {
        while (src[i])
        {
            res[i] = src[i];
            i++;
        }
        res[i] = '\0';
    }
    return (res);
}


int main()
{
    char *str = "bastien";
    printf("%s\n",ft_strdup(str));
    return (0);
}