#include<stdio.h>

int	    is_power_of_2(unsigned int n)
{
    int i = 0;

    while(n != 0)
    {
        if(n == 2)
            i = 1;
        n = n / 2;
    }
    return i;
}

int main(void)
{
    int n = 20;
    printf("%d\n", is_power_of_2(n));
    return 0;
}