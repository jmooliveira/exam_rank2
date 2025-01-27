#include<unistd.h>
#include<stdio.h>

void ft_inter(char *av1, char *av2)
{
    int i = 0;
    int j = 0;
    unsigned char ch[256] = {0};
    while(av1[i])
    {
        j = 0;
        while(av2[j])
        {
            if(av1[i] == av2[j])
                if(!ch[(unsigned char) av1[i]])
                {
                    write(1, &av1[i], 1);
                    ch[(unsigned char) av1[i]] = 1;
                }
            j++;
        }
        i++;
    }

}

int main(int ac, char **av)
{
    if(ac != 3)
    {
        write(1, "\n", 1);
        return 1;
    }

    ft_inter(av[1], av[2]);
    write(1, "\n", 1);
    return 0;
}