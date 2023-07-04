#include <unistd.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int j  = 0; 
    while (src[i])
    {
        i++;
    }
    char *ret = malloc(sizeof(char) * i + 1); 
    if (!ret)
        return NULL;
    while (src[j])
    {
        ret[j] = src[j];   
        j++;
    }
    ret[j] = '\0';
    return (ret);
}