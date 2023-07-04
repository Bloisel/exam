#include <unistd.h>



int main(int argc , char **argv)
{
    if (argc != 2)
    {
        write(1 , "\n" , 1);
        return (0);
    }
    int i = 0;
    int j = 0;
    int count = 0;
    char *str = argv[1];
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                j = 0;
                count = str[i] - 97;
                while (j <= count)
                {
                    write(1 , &argv[1][i] , 1);
                    j++;
                }
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                j = 0;
                count = str[i] - 65;
                while (j <= count)
                {
                    write(1 , &argv[1][i] , 1);
                    j++;
                }   
            }
            else
                write(1 , &argv[1][i] , 1);
            i++;
        }
    }
    write (1, "\n", 1);
}