#include <stdio.h>
#include <unistd.h>


unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	out;
	out = 0;
	out = out | ((octet & 128) >> 7);
	out = out | ((octet & 64) >> 5);
	out = out | ((octet & 32) >> 3);
	out = out | ((octet & 16) >> 1);
	out = out | ((octet & 8) << 1);
	out = out | ((octet & 4) << 3);
	out = out | ((octet & 2) << 5);
	out = out | ((octet & 1) << 7);
	return (out);
}
// unsigned char	reverse_bits(unsigned char octet)
// {
// 	int		i = 7;
// 	unsigned char	res = 0;

// 	while (i >= 0)
// 	{
// 		res = res * 2 + (octet % 2);
// 		octet /= 2;
// 		i--;
// 	}
// 	return (res);
// }

void   print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bits;

    while (i--)
    {
        bits = (octet >> i & 1) + '0';
        if (i == 3)
            write(1 , " ", 1);
        write(1 , &bits , 1);
    }
    write(1 , "\n" ,1);
}

int main(void)
{
    unsigned char octet = 2;

    printf("Octet avant inversion:\n");
    print_bits(octet);

    octet = reverse_bits(octet);

    printf("Octet après inversion:\n");
    print_bits(octet);

   unsigned char octet1 = 20;

    printf("Octet avant inversion:\n");
    print_bits(octet1);

    octet1 = reverse_bits(octet1);

    printf("Octet après inversion:\n");
    print_bits(octet1); 
    
    
    
    // printf("reverse_bits(20) = %d\n", reverse_bits(20));
    // printf("reverse_bits(36) = %d\n", reverse_bits(36));
    // printf("reverse_bits(5) = %d\n", reverse_bits(5));
    // printf("reverse_bits(2) = %d\n", reverse_bits(2));

    return 0;
}