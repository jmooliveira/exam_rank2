#include<stdio.h>
#include<stdlib.h>

# define WRD_NUM 1000
# define WRD_LEN 1000

char    **ft_split(char *str)
{
    int i = 0;
    int world_position = 0;
    int world_begin = 0;
    char **split;

    while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
        i++;
    split = (char **) malloc (WRD_NUM * sizeof(char **));
    while(str[i])
    {
        if (str[i] > 32)
        {
            world_begin = 0;
            split[world_position] = (char *) malloc (WRD_LEN * sizeof(char));
            while(str[i] > 32)
            {
                split[world_position][world_begin] = str[i];
                i++;
                world_begin++;
            }
            split[world_position][world_begin] = '\0';
            world_position++;
        }
        i++;
    }
    return (split);
}

int main()
{
    char *string = "Bruno e Roberto GO HORSE";
    char **split_main;
    int i;

    split_main = ft_split(string);
    i = 0;
    while(split_main[i])
    {
        printf("%s\n", split_main[i]);
        i++;
    }
    return (0);
}