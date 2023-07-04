#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int signe = 1;
    int digit = 0; 
    int res = 0;

    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        signe = (str[i] == '-') ? -1 : 1;
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            digit = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'z')
            digit = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            digit = str[i] - 'A' + 10;
        else 
            break;
        if (digit >= str_base)
            break;
        res = res * str_base + digit;
        i++;
    }
    return (res * signe);    
}
