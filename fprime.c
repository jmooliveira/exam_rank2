#include<stdio.h>
#include<stdlib.h>

int ft_is_prime(int prime)
{
    int i;
    i = 2;
    
    if(prime == 2)
     return 1; 
    while(i < (prime / 2))
    {
        if ((prime % i) == 0)
            return 0;
        i++;
    }
    return (1);
}

void    ft_fprime(int nbr)
{
    int i;

    i = 2;
    while(i <= nbr)
    {
        if(ft_is_prime(i) && (nbr % i == 0))
        {
            while(nbr % i == 0)
            {
                nbr = nbr / i;
                printf("%d", i);
                if(nbr != 1)
                    printf("*");
            }
        }
        i++;
    }
}

int main(int ac, char **av)
{
    int nbr;

    if(ac != 2)
        return(puts(""));
    nbr = atoi(av[1]);
    if(nbr == 1)
         printf("%d", 1);
    ft_fprime(nbr);
    puts("");
    return (0);
}