

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc , char *argv[])
{
    int i = 0;
    int wc = 0;
    int k = 0;
    char *str;
    int start = 0;
    while (argv[1][i])
    {    
         if (argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                wc++;
                while (argv[1][i] == ' ' || argv[1][i] == '\t')
                    i++;
            } 
        i++;
        wc++;
    }
    char *ret = (char *)malloc(sizeof(char *) * wc + 1);
    i = 0;
    while (argv[1][i])
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
        {
            i++;
            if (argv[1][i] != ' ' || argv[1][i] != '\t')
            {
            i++;
            }
            start = i;
        }
        i++;
    }
    while (argv[1][start])
    {
        ret[k] = argv[1][start];
        k++; 
        start++;
        while (argv[1][i])
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                i++;
                if (argv[1][i] != ' ' || argv[1][i] != '\t')
                    {
                    int second = i;
                    while(argv[1][second])
                    {
                        ret[k] = argv[1][second];
                        k++;
                        second++;
                    }
                    }
            }
        i++;
        }
    }
    printf("%s\n",ret);
    printf("%d\n", start);
}