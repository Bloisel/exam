#include <unistd.h>


int mini_atoi(char *str)
{
    int i = 0;
    int result = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return result;
}

void    print_hex(int nb)
{
    char *strbase = "0123456789ABCDEF";

    if (nb >= 16)
    {
        print_hex(nb / 16);
    }
    write(1 , &strbase[nb % 16] , 1);
}

int main(int argc , char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        int res = mini_atoi(argv[1]);
        print_hex(res);
    }
    write(1 , "\n", 1);
    return (0);
}