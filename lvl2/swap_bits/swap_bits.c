#include<unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

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
    unsigned char swap_byte;
    
    print_bits(byte);
    write(1, "\n", 1);
    swap_byte = swap_bits(byte);
    print_bits(swap_byte);
    write(1, "\n", 1);
    return 0;
}
