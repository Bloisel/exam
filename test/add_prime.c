#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

void   ft_putnbr(int n)
{
    char nb;
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    nb = (n % 10) + '0';
    write (1 , &nb , 1);
} 

int ft_atoi(char *str)
{
    int signe = 1;
    int result = 0;
    int i = 0;

    while (str[i] == ' ' || str[i] >= 9  && str[i] <= 13)
        i++;
    if (str[i] == '-')
        signe = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * signe); 
}

int is_prime(int n)
{
    if (n <= 1)
        return (0);
    for (int i = 2; i * i <= n ; i++)
    {
        if (n % i == 0)
            return (0);
    }
    return (1); 
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    int n = ft_atoi(argv[1]);
    if (n <= 0)
        return (0);
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i) != 0)
            sum += i;
    }
    ft_putnbr(sum);
    write(1, "\n", 1);

    return (0);
    
}

