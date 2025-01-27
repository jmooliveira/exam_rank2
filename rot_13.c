#include<unistd.h>
#include<stdio.h>

void rot_13(char *av)
{
	int i;

	i = 0;
	while(av[i])
	{
		if((av[i] >= 65 && av[i] <= 90))
		{
			if(av[i] >= 78)
			{	
				av[i] = av[i] - 13;
				write(1, &av[i], 1);
			}
			else
			{
				av[i] = av[i] + 13;
				write(1, &av[i], 1);
			}
		}
		else if((av[i] >= 97 && av[i] <= 122))
		{
			if(av[i] >= 110)
			{	
				av[i] = av[i] - 13;
				write(1, &av[i], 1);
			}
			else
			{
				av[i] = av[i] + 13;
				write(1, &av[i], 1);
			}
		}
		else 
			write(1, &av[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if(ac != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	else
		rot_13(av[1]);
	return (0);
}