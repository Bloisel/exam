#include <stdio.h>
#include <stdlib.h>

int main(int argc , char **argv)
{
    if (argc == 4)
    {
        int nb = atoi(argv[1]);
        int nb3 = atoi(argv[3]);

        if (argv[2][0] == '*')
        {
            printf("%d" , (nb * nb3));
        }
        if (argv[2][0] == '+')
        {
            printf("%d" , (nb + nb3));
        }
        if (argv[2][0] == '-')
        {
            printf("%d" , (nb - nb3));
        }
        if (argv[2][0] == '/')
        {
            printf("%d" , (nb / nb3));
        }
        if (argv[2][0] == '%')
        {
            printf("%d" , (nb % nb3));
        }
    }
    printf("\n");        
}