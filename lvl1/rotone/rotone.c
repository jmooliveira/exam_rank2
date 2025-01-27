#include<unistd.h>
#include<stdio.h>

int main(int c, char *v[])
{
    int i = 0;
    char ch;

    if(c != 2)
    {
        write(1, "\n", 1);
        return (1);
    }
    while(v[1][i] != '\0')
    {   
        //printf("%c\n", v[1][i]);
        if(v[1][i] >= 65 && v[1][i] <= 90)
            if(v[1][i] == 90)
                write(1, "A", 1);
            else
            {
                ch = v[1][i] + 1;
                write(1, &ch, 1);
            }
        else if(v[1][i] >= 97 && v[1][i] <= 122)
            if(v[1][i] == 122)
                write(1, "a", 1);
            else
            {
                ch = v[1][i] + 1;
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