#include <unistd.h>

int	ft_atoi(const char *str)
{
	int nbr;
	int i;

	nbr = 0;
	i = 0;
	if(str[0] == '-' || str[0] == '+')
		i++;
	while(str[i] != '\0')
	{
		if(nbr == 0 && str[i] == 0)
			i++;
		if(str[i] >= 48 && str [i] <= 57)
			nbr = (nbr * 10) + (str[i] - 48);
		else break;
		i++;
	}
	if (str[0] == '-')
		nbr = -nbr;
	return (nbr);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if(argc != 2)
		return (1);
	
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
	return 0;
}

