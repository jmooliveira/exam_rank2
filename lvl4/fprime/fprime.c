#include<stdio.h>
#include<stdlib.h>

void fprime(int number)
{
    int i = 1;
    if(number == 1)
        printf("1");
    while(number >= ++i)
    {
        if(number % i == 0)
        {
            printf("%d", i);
            if(i == number)
                break;
            printf("*");
            number = number / i;
            i = 1;
        }
    }
}

int main(int ac, char **av)
{
    int number = 0;
    if(ac == 2)
    {
        number = atoi(av[1]);
        fprime(number);
    }
    printf("\n");
    return (0);
}