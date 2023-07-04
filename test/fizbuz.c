#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void fizz(int number)
{
    char nb;

    if (number > 9)
    {
        fizz(number / 10);
    }
    nb = (number % 10) + 48;
    write (1 , &nb , 1); 
}

int main()
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0)
        {
            write(1,"fizz",4);
        }
        else if (i % 5 == 0)
        {
            write (1,"buzz",4);
        }
        else if (i % 3 == 0 && i % 5 == 0)
        {
            write(1,"fizzbuzz",8);
        }
        else 
            fizz(i);
        
        i++;
        write(1,"\n",1);
    }
}