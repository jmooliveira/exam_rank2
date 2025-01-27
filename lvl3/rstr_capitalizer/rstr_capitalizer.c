#include<unistd.h>

int ft_islower(char c, char d)
{
    if(c >= 'a' && c <= 'z')
    {
        if(d == ' ' || d == '\t' || d == '\0')
            return 1;
    }
    return 0;
}

int ft_isupper(char c, char d)
{
    if(c >= 'A' && c <= 'Z')
    {
        if(d != ' ' && d != '\t' && d != '\0')
            return 1;
    }
    return 0;
}

int main(int ac, char *av[])
{
    int i;
    int j;

    if(ac == 1)
    {
        write(1, "\n", 1);
        return 1;
    }
    i = 1;
    while(i < ac)
    {
        j = 0;
        while(av[i][j])
        {
            if(ft_islower(av[i][j], av[i][j + 1]))
                av[i][j] = av[i][j] - 32;
            else if(ft_isupper(av[i][j], av[i][j + 1]))
                av[i][j] = av[i][j] + 32;
            write(1, &av[i][j], 1);
            j++;
        }
        i++;
        write(1, "\n", 1);
    }
    return 0;
}