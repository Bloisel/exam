#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


unsigned char	swap_bits(unsigned char octet)
{
    unsigned char left = (octet >> 4);
    unsigned char right = (octet << 4);
    return (left | right);
}