#include<unistd.h>
#include<stdio.h>

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

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 7;
    int res = 0;

    while(i >= 0)
    {
        res = res * 2 + (octet % 2);
        octet = octet / 2;
        i--;
    }
    return res;
}

unsigned char	swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

int main(void)
{
    unsigned char byte = 0b00000010;
    unsigned char swap_byte;
    unsigned char rev_byte;
    
    printf("byte: ");
    print_bits(byte);
    write(1, "\n", 1);
    
    printf("swap byte: ");
    swap_byte = swap_bits(byte);
    print_bits(swap_byte);
    write(1, "\n", 1);

    
    printf("reverse byte: ");
    rev_byte = reverse_bits(byte);
    print_bits(rev_byte);
    write(1, "\n", 1);
    
    return 0;
}
