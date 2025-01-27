#include<unistd.h>

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

int main(void)
{
    unsigned char byte = 0b00000010;
    reverse_bits(byte);
    return 0;
}