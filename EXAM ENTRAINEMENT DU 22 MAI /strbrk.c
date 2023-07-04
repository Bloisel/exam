#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *ft_strpbrk(const char *s, const char *charset)
{
    int i = 0;
    int j;
    while (s[i])
    {
        j = 0;
        while (charset[j])
        {
            if (charset[j] == s[i])
                return ((char *)&s[i]);
            j++;
        }
        i++; 
    }
    return NULL;
}

char    *ft_test(char *s , char *s2)
{
    int i = 0;
    int j = 0;
    while (*s)
    {
        i = 0;
        if(*s == s2[i])
            return (char *)s;
        s++;
    }
    return NULL;
    printf("%c\n",(*s));
}

int main()
{
    char str[] = "Hello World";
    char strb[] = "o";
    char str1[] = "";
    char str2[] = "0";

    printf("%s\n", strpbrk(str , strb));
    printf("%s\n", ft_strpbrk(str , strb));
    printf("%s\n", ft_test(str , strb));


}