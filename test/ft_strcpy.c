#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *ret(char *s1 , char *s2)
{
    int i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}


int main(void)
{
    char str[100];
    char *str1 = "lois";
    printf("%s\n",ret(str , str1));
    return (0);
}