#include <string.h>
#include <stddef.h>
#include <stdio.h>


char *ft_strchr(const char *s1 , int c)
{
    while (*s1)
    {
        if (*s1 == c)
            return ((char *)s1);
        ++s1;
    }
    return (0);
}


size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    while (s[i])
    {
        if (ft_strchr(accept, s[i]) == 0)
            break;
        i++;
    }
    return (i);
}

int main()
{
    const char *s = "Hello, world!";
    const char *accept = "Helo, wrd";
    size_t len = ft_strspn(s, accept);
    printf("Length of initial segment: %zu\n", len);
    const char *s1 = "Hello, world!";
    const char *accept1 = "Helo, wrd";
    size_t len1 = strspn(s1, accept1);
    printf("Length of initial segment: %zu\n", len1);
    return 0;
}