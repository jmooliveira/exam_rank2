#include<unistd.h>
#include<stdio.h>

void ft_epur_str(char *av)
{
    int i;

    i = 0;
    while(av[i] == ' ' || av[i] == '\t')
        i++;
    while(av[i])
    {
        if ((av[i] != ' ' && av[i] != '\t'))
            write(1, &av[i], 1);
        else if((av[i] == ' ' || av[i] == '\t'))
        {
            if((av[i + 1] != ' ' && av[i + 1] != '\t') && av[i + 1])
                write(1, " ", 1);
        }
        i++;
    }       
}

int main(int ac, char **av)
{
    if(ac != 2)
    {
        write(1, "\n", 1);
        return (1);
    }
    ft_epur_str(av[1]);
    write(1, "\n", 1);
    return (0);
}