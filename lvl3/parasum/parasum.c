#include<unistd.h>

void ft_printchar(char c);
void ft_putnbr(int nbr);

void ft_putnbr(int nbr)
{
    char c;
    
    if(nbr > 9)
    {
        ft_putnbr(nbr / 10);
        //ft_putnbr(nbr % 10);
    }
    else
    {
        c = nbr + '0';
        ft_printchar(c);
    }
}

void ft_printchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char *av[])
{
    (void) av;

    ac--;
    ft_putnbr(ac);
    ft_printchar('\n');
    return 0;
}