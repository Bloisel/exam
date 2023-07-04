


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


// int main(int argc , char *argv[])
// {
//     int i = 0;
//     int j = 0;
//     int end = 0;
//     int begin = 0;
//     int len = 0;
//     int start = 0;
    
//     while (argv[1][i] && (argv[1][i] == '\t' || argv[1][i] == ' '))
//     {
//         i++; 
//     }
//     start = i;
//     while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
//     {
//         i++;
//         len++;
//     }
//     while (argv[1][i] && (argv[1][i] == '\t' || argv[1][i] == ' '))
//     {
//         i++;
//         while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
//         {
//             write(1, &argv[1][i] , 1);
//             i++;
//             if (argv[1][i] && (argv[1][i] == '\t' || argv[1][i] == ' '))
//                 write(1, " ", 1);
//             else if (argv[1][i] == '\0')
//                 break ;
//         }
//     }
//     write(1, " ", 1);
//     write(1, &argv[1][start++] , len);
// }




int main(int argc , char *argv[])
{
    int i = 0;
    int j = 0;
    int end = 0;
    int begin = 0;
    int len = 0;
    int start = 0;

    while (argv[1][i] && (argv[1][i] == '\t' || argv[1][i] == ' '))
        i++;
    start = i;
    while (argv[1][++i] && (argv[1][i] != '\t' && argv[1][i] != ' '))
    {
        len++;
    }
    while (argv[1][i] && (argv[1][i] == '\t' || argv[1][i] == ' '))
        i++;
    
    
    while (argv[1][i])
    {
        if (argv[1][i] == '\t' || argv[1][i] == ' ')
            {
                while (argv[1][i] && (argv[1][i] == '\t' || argv[1][i] == ' '))
                    i++;
                if (argv[1][i] == '\0')
                    break;
                write (1, " ", 1);
            }
            else
            {
                write(1, &argv[1][i], 1);
                i++;
            }
    }
    write (1, " ", 1);
    write(1, &argv[1][start], len + 1);
    write (1 , "\n", 1);
}