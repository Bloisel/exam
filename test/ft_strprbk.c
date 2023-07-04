#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;

    while (*s1)
    {
        i = 0;
        while (s2[i])
        {
            if (*s1 == s2[i])
                return ((char *)s1);
            i++;
        }
        s1++;                   
    }
    return(0);
}

int main()
{
    char *str = "Hello World";
    char *str1 = "ow";
    char *result; 
    result = ft_strpbrk(str , str1);
    if (result == 0)
        return (0);
    else
		printf("Matching character found: %c\n", *result); 
    return(0);
}