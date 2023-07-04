#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void  fizz(int j)
{
    char *str = "0123456789";
       
    if (j > 9)
    {
        fizz(j / 10);
    }
    write(1 , &str[j % 10] , 1);
}

int main()
{
    int i = 0;

    while (i <= 100)
    {
        if (i % 3 == 0)
            write (1 , "fizz\n", 5);
        if (i % 5 == 0)
            write (1 , "buzz\n" , 5);
        if (i % 5 == 0 && i % 3 == 0)
            write (1 , "fizzbuzz\n" , 9);
        else
        { 
            fizz(i);
            write(1 , "\n" , 1);
        }
        i++;
    }
}