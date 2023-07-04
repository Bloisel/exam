#include <unistd.h>


int main(int argc , char **argv)
{
    if (argc <= 1)
    {
        write(1 , "\n" , 1);
        return (0);
    }
    int i = 0;
    int start = 0;
    int end = 0;
    int flag = 0;
    if (argc >= 2)
    {
        while (argv[1][i])
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t' && flag == 0)
                i++;
            start = i;
            while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t' && flag == 0)
                i++;
            end = i;
            flag = 1;
            while (argv[1][i])
            {
                while (argv[1][i] == ' ' || argv[1][i] == '\t' && flag == 1)
                {
                    i++;
                    flag = -1;
                }
                while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
                {
                    write(1 , &argv[1][i] , 1);
                    i++;
                    if (argv[1][i] == '\0')
                    {
                        write(1 , " " ,1);
                        break;
                    }
                }
                if (flag == -1 && argv[1][i])
                {
                    write (1 , " ", 1);
                    flag = 1;
                }
            }
        }
        write(1 , &argv[1][start] , (end - start));
    }
    write (1 , "\n" , 1);
}