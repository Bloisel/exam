#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

swap 

octet >> 4 | octet << 4

reverse 
i = 8 
unsigned char res 

while i 
res = res * 2 + octet modulo 2 
octet = octet / 2 
i--
return res 

print 
i = 8 
unsigned char bit 
while i-- 
bit = (octet >> i & 1) + '0'
write (1 , &bit , 1);

