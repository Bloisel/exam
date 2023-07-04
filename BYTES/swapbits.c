#include <unistd.h>
#include <stdio.h>

unsigned char reverse_1bits(unsigned char octet)
{
    unsigned char result = 0;
    int i;

    for (i = 0; i < 8; i++)
    {
        result = (result << 1) | (octet & 1);
        octet >>= 1;
    }
    return result;
}

int main(void)
{
    unsigned char octet = 0x24;  
    unsigned char result = reverse_1bits(octet);
    printf("%02X\n", result);      
    return 0;
}