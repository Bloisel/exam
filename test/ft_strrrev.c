#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return(i);
}


char *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    j = ft_strlen(str) - 1;
    while (i < j)
    {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++; 
        j--;
    }
    return (str); 
}

int main(void)
{
    char str[] = "Hello, world!";
    printf("Original string: %s\n", str);
    ft_strrev(str);
    printf("Reversed string: %s\n", str);
    return 0;
}