#include<stdio.h>
#include<unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int res;
    int i;
    int neg;
    int v;

    res = 0;
    i = 0;
    neg = 1;
    if(str[0] == '-')
    {
        neg = -1;
        i++;
    }
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9') 
            v = str[i] - 48;
        else if(str[i] >= 'A' && str[i] <= 'F')
            v = str[i] - 65 + 10;
        else if(str[i] >= 'a' && str[i] <= 'f')
            v = str[i] - 97 + 10;
        else
            break;
        res = res * str_base + v;
        i++;
    }
    return (res * neg);
}

int main(int ac, char *av[])
{
    int str_base;

    if (ac == 2)
    {
        scanf("%d", &str_base);

        printf("%d\n", ft_atoi_base(av[1], str_base));
    }
    return (0);
}