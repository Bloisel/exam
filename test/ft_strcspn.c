#include <string.h>
#include <stddef.h>
#include <stdio.h>


size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    int j;
    while (s[i])
    {
        j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

int main()
{
    char str1[] = "Hello, world!";
    char str2[] = "aeiou";
    size_t res1 = ft_strcspn(str1, str2);
    size_t res2 = strcspn(str1, str2);
    printf("ft_strcspn : %zu\n", res1);
    printf("strcspn    : %zu\n", res2);
    return (0);


}