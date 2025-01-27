#include<unistd.h>
#include<stdio.h>

int main(int c, char **v)
{
    int i = 0;
    char ch;
    if(c != 2)
    {
        write(1, "\n", 1);
        return 1;
    }
    while(v[1][i])
    {
        if(v[1][i] >= 65 && v[1][i] <= 90)
        {
            ch = v[1][i] + 32;
            write(1, "_", 1);
            write(1, &ch, 1);
        }
        else
        {
            ch = v[1][i];
            write(1, &ch, 1);
        }   
        i++;
    }
    write(1, "\n", 1);
    return 0;
}