#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ft_atoi(char *av);
int ft_sum_prime(int nbr);
int ft_is_prime(int prime);

int ft_atoi(char *av)
{
    int i = 0;
    int n = 0;

    while(av[i])
    {
        n = n * 10 + av[i] - '0';
        i++;
    }
    return n;
}

int ft_sum_prime(int nbr)
{
    int i = 2;
    int sum_prime = 0;

    if(nbr < 2 )
        return 0;
        
    while(i <= nbr)
    {
        if(ft_is_prime(i))
            sum_prime = sum_prime + i;
        i++;
    }
    return sum_prime;
}

int ft_is_prime(int prime)
{
    int i = 2;
    while (i <= prime / 2)
    {
        if(prime % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main(int ac, char *av[])
{
    if(ac != 2 || av[1][0] == '-')
    {
        write(1, "0\n", 2);
        return 1;
    }

    int nb = 0;

    nb = ft_atoi(av[1]);
    //printf("%d\n", nb);
    printf("%d\n", ft_sum_prime(nb));
    return 0;
}