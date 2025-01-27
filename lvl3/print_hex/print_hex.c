#include<unistd.h>
#include<stdio.h>

int ft_atoi(char *number_char)
{
    int  number = 0;
    int i = 0;

    while(number_char[i])
    {
        number = number * 10 + number_char[i] - '0';
        i++;
    }
    return number;
}

void    print_hex(int number)
{
    char c;

    if(number < 10)
    {
        c = number + '0';
        write(1, &c, 1);  
    }
    else if(number >= 10 && number < 16)
    {
        c = number + 'a' - 10;
        write(1, &c, 1); 
    }
    else
    {
        print_hex(number / 16);
        print_hex(number % 16);
    }
}

int main(int ac, char **av)
{
    int number = 0;
    if(ac == 2)
    {
        number = ft_atoi(av[1]);
        //printf("%d\n", number);
        print_hex(number);
    }
    write(1, "\n", 1);
    return (0);
}