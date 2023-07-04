#include <unistd.h>


unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int res = 0;

    if (a == 0 || b == 0)
        return (0);

    if (a > b)
        res = a;
    else
        res = b;
    while (1)
    {
        if (res % a == 0 && res % b == 0)
            return res;
        ++res;
    }
}

int main()
{
    unsigned int a = 20;
    unsigned int b = 10;



}
