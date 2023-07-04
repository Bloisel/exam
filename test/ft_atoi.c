#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int ft_atoi(char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
            i++;
        } 
    return (sign * result);
}

int main()
{
    char *nbr = "245566";
    printf("%d\n",ft_atoi(nbr));
}