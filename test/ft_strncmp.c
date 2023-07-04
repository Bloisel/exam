#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] == s2[i])
        {
            i++;
        }
        else 
            return (s1[i] - s2[j]);
    }
    return (s1[i] - s2[j]);
}

int main()
{
    char *str = "bastien";
    char *str1 = "BASTIEN";
    int i = ft_strcmp(str, str1);
    printf("%d\n",i);
    return (0);
}