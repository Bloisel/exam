#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int atoi_base(const char *str, int str_base)
{
    const char *tmp = str;
    int signe = 1;
    int digit = 0;
    int result = 0;
    int i = 0;

    if (tmp[i] == '-')
    {
        signe = -1;
        i++;
    }
    while (tmp[i])
    {
        digit = tmp[i] - '0';
        if (digit > 9 && tmp[i] >= 'a' && tmp[i] <= 'z')
        {
            digit = (tmp[i] - 'a') + 10;
        }
        if (digit > 9 && tmp[i] >= 'A' && tmp[i] <= 'Z')
        {
           digit = (tmp[i] - 'A') + 10; 
        }
        if (digit > str_base)
            return (0);
        result = result * str_base + digit;
        i++;
    }
    return result * signe;
}


int main(void)
{
    char *str = "Ab357";
    int str_base = 16;

    int result = atoi_base(str, str_base);

    printf("%s en base %d = %d en base 10\n", str, str_base, result);

    return 0;
}