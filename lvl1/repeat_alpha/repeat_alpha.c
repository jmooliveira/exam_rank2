#include<unistd.h>

int main (int ac, char *av[])
{
    int i = 0;
    char *str = av[1];
    int count1;
    int count2;

    if(ac == 2)
    {
        while(str[i])
        {
            count1 = 0;
            if(str[i] >= 'A' && str[i] <= 'Z')
                count2 = str[i] - 'A';
            if(str[i] >= 'a' && str[i] <= 'z')
                count2 = str[i] - 'a';
            while(count1 <= count2)
            {
                write(1, &str[i], 1);
                count1++;
            }
            count2 = 0;
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}