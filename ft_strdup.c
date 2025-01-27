//#include<unistd.h>
//#include<stdio.h>
#include<stdlib.h>

int     ft_strlen(char *src);
char    *ft_strdup(char *src);

char    *ft_strdup(char *src)
{
    char    *dup;
    int     len_src;
    int     i;

    len_src = ft_strlen(src);
    i = 0;
    dup = (char *) malloc (len_src * sizeof(char));
    while(src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

int     ft_strlen(char *src)
{
    int len;

    len = 0;
    while(src[len])
        len++;
    return (len);
}
/*
int	main(int ac, char **av)
{
	char    *name = "Jefferson";
    
    printf("%s", ft_strdup(name));
    return (0);
}
*/