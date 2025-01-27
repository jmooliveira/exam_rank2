#include <stdio.h>
#include <unistd.h>

void ft_print_hex(unsigned int nbr)
{
    char ch;

    if(nbr < 10)
    {
        ch = nbr + 48;
        write(1, &ch, 1);
    }
    else if(nbr >= 10 && nbr <= 15)
    {
        ch = nbr + 87;
        write(1, &ch, 1);
    }
    else 
    {
        ft_print_hex(nbr / 16);
        ft_print_hex(nbr % 16);
    }
}

unsigned int ft_atoi_pos(char *av)
{
    unsigned int    nbr;
    char            ch;
    int             i;

    nbr = 0;
    i = 0;
    while(av[i])
    {
        ch = av[i];
        nbr = nbr * 10 + ch - 48;
        i++;
    }
    return nbr;
}

int main(int ac, char *av[])
{
    unsigned int nbr;
    if(ac != 2)
    {
        write(1, "\n", 1);
        return (1);
    }
    nbr = ft_atoi_pos(av[1]);
    //printf("%u\n", nbr);
    ft_print_hex(nbr);
    write(1, "\n", 1);
    return (0);
}