#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int ft_atoi_base(const char *tmp, int str_base)
{
    int result = 0;
    int signe = 1;
    int i = 0;

    while (tmp[i] == ' ' || (tmp[i] >= '\t' && tmp[i] <= '\r'))
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

        result = result * str_base + digit;
        i++;
    }

    return signe * result;
}
int main() {
    const char *str = "Ceci permet de découvrir le fonctionnement de ton ft_atoi_base.";
    int base = 16;

    int result = ft_atoi_base(str, base);

    printf("Result: %d\n", result);

    return 0;
}