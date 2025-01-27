#include<unistd.h>

int main(int ac, char *av[])
{
	int		i;
	char	ch;

	if(ac != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	i = 0;
	while(av[1][i])
	{
		if(av[1][i] == '_')
		{
			i++;
			ch = av[1][i] - 32;
			write(1, &ch, 1);
		}
		else
		{
			ch = av[1][i];
			write(1, &ch, 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}