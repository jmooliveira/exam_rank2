#include <unistd.h>

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while(s[i])
        i++;
    return (i);
}

void ft_hidenp(const char *s1, const char *s2)
{
    int len_s1;
    int i;
    int j;

    len_s1 = ft_strlen(s1);
    i = 0;
    j = 0;
    while(s2[i])
    {        
        if(s1[j] == s2[i])
            j++;
        i++;
    }
    if(len_s1 == j)
        write(1, "1\n", 2);
    else    write(1, "0\n", 2);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if(argc != 3)
		return (write(1, "\n", 1));
	
	ft_hidenp(argv[1], argv[2]);
	return 0;
}