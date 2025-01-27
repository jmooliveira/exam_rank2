#include<stdlib.h>

char    **ft_split(char *str)
{
    int i;
    int j;
    int k;
    char **split;

    split = (char **) malloc (1000 * sizeof(char*));
    i = 0;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while(str[i])
    {
        if(str[i] > 32)
        {
            split[j] = (char *) malloc (1000 * sizeof(char));
            k = 0;
            while(str[i] > 32)
            {
                split[j][k] = str[i];
                k++;
                i++;
            }
            split[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    split[i] = 0;
    return split;
}
/*
int main(void)
{
    char *str = "Jefferson Morais de Oliveira";
    char **split;
    int i = 0;
    int j = 0;

    
    return 0;
}

*/