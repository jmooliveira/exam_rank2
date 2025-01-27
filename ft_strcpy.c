#include<stdio.h>

char	*ft_strcpy(char *s1, char *s2);

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
int	main()
{
	char	*name = "jefferson";
	char	cpy[50];

	ft_strcpy(cpy, name);
	printf("%s\n", cpy);
	return (0);
}
*/