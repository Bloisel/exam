#include <unistd.h>




int main(int argc , char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
            i++;
        while (argv[1][i] == '\0' || argv[1][i] == '\t' || argv[1][i] == ' ')
        {
            i--;
        }
        int end = i;
        int count = 0;
        i = 0;
        while (argv[1][i] && i <= end)
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t' && count == 0)
            {
                i++;
            }
            while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                write(1 , &argv[1][i] , 1);
                i++;
            }
            if (i < end && argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                write(1 , " " , 1);
                write(1 , " " , 1);
                write(1 , " " , 1);
                count = 1;
                i++;
            }
        }
    }
    write(1 , "\n" , 1);
}