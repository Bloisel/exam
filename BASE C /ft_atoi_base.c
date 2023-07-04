#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int	ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int result = 0;
    int i = 0;
    const char *s = str;

    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }

    while (s[i])
    {
        int digit = s[i] - '0';
        if (digit > 9)
            digit = (s[i] - 'a') + 10;
        if (digit >= str_base)
            break;
        result = result * str_base + digit;
        i++;
    }

    return sign * result;
}

int main(void)
{
    char *str = "b6844";
    int str_base = 16;

    int result = ft_atoi_base(str, str_base);

    printf("%s en base %d = %d en base 10\n", str, str_base, result);

    return 0;
}