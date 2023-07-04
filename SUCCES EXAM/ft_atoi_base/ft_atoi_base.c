#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    const char *tmp;
    tmp = str;
    int signe = 1;
    int res = 0;
    int digit = 0;
        
    while (tmp[i] == ' ' || tmp[i] >= 9 && tmp[i] <= 13)
                i++;
    if (tmp[i] == '-' || tmp[i] == '+')
        {
            signe = (tmp[i] == '-') ? -1 : 1;
            i++;
        }
    while (tmp[i])
    {
        int digit = 0;
        if (tmp[i] >= '0' && tmp[i] <= '9')
            digit = tmp[i] - '0';
        else if (tmp[i] >= 'a' && tmp[i] <= 'z')
            digit = tmp[i] - 'a' + 10;
        else if (tmp[i] >= 'A' && tmp[i] <= 'Z')
            digit = tmp[i] - 'A' + 10;
        else
            break;
        if (digit >= str_base)
            break;
        res = res * str_base + digit;
        i++;
    }
    return res * signe;
}
