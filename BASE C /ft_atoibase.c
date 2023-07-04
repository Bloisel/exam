#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int result = 0;
    const char *p = str;

    if (*p == '-')
    {
        sign = -1;
        p++;
    }

    while (*p)
    {
        int digit = *p - '0';
        if (digit > 9)
            digit = (*p - 'a') + 10;
        if (digit >= str_base)
            break;
        result = result * str_base + digit;
        p++;
    }

    return sign * result;
}


int main(void)
{
    char *str = "12fdb3";
    int str_base = 16;

    int result = ft_atoi_base(str, str_base);

    printf("%s en base %d = %d en base 10\n", str, str_base, result);

    return 0;
}



int	ft_atoi_base(const char *str, int str_base)
{
    int signe = 1;
    int resultat = 0;
    const char *p = str;

    if (*p == '-')
    {
        signe = -1;
        p++;
    }
    while (*p)
    {
        int digit = *p - '0';
        if (digit > 9)
            digit = (*p - 'a') + 10;
        if (digit > str_base)
            break;
        resultat = resultat * str_base + digit;
        p++;
    }
    return signe * resultat;
}

int ft_atoi_base(const char *str, int base)
{
    int signe = 1;
    const char *p;
    int result = 0;


    if (*p == '-')
    {
        signe = -1;
        p++;
    }
    while (*p)
    {
        int digit = *p - '0';
        if (digit > 9)
            digit = (*p - 'a') + 10;
        if (digit > base)
            break;
        result = result * base + digit;
        p++;
    }
    return result * signe; 
}


int ft_atoi_base(const char *str , int base )
{
    int signe = 1;
    const char *p;
    int res;
    int digit;

    if (*p == '-')
    {
        signe = -1;
        p++;
    }
    while (*p)
    {
        digit = *p - '0';
        if (digit > 9)
            digit = (p - 'a') + 10;
        if (digit > base)
            break;
        result = result * base + digit;
        p++;
    }
    return result * signe;



    }


}

int ft_atoi_base(const char *str , int base )

int digit 
int signe = 1;
const char *p = str

if *p == '-'
    signe = -1;
p++;

while *p
    digit = *p - '0';
    if digit > 9
        digit = *p - 'a' + 10;
    if digit > str base 
        return NULL
    
