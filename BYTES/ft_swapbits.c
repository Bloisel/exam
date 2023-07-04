#include <stdio.h>
#include <unistd.h>
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));

}


unsigned char reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bits;
    while (i > 0)
    {
        bits = bits * 2 + (octet % 2);
        octet /= 2;
        i--;
    }
    return (bits); 
}



void print_bits(unsigned char octet)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (octet >> i) & 1);
        if (i == 4)
            printf(" ");
    }
    printf("\n");
}

int main(void)
{
    //unsigned char octet = 0b01000001; // 0100 | 0001
    unsigned char octet = 65;
    printf("Octet avant inversion:\n");
    print_bits(octet);

    octet = swap_bits(octet);

    printf("Octet après inversion:\n");
    print_bits(octet);

    unsigned char test = 38;
    printf("Octet avant inversion:\n");
    print_bits(test);

    test = reverse_bits(test);

    printf("Octet après inversion:\n");
    print_bits(test);


    return 0;
}