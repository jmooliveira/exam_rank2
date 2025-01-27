#include<unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 7;
    unsigned char bit = 0;

    while(i >= 0)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
        i--;
    }
}

int main(void)
{
    unsigned char byte = 0b00000010;
    print_bits(byte);
    return 0;
}