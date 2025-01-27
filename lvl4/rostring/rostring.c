#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_rostring(char *argv);
int		ft_len_rostring(char *argv);
void	ft_putstr(char *str);

void	ft_rostring(char *argv)
{
	//char *rostring;

	printf("%d\n", ft_len_rostring(argv));
//rostring = malloc ((ft_len_rostring(argv) + 1) * sizeof(char));

}

int	ft_len_rostring(char *argv)
{
	int	i;
	int nbr_words;
	int flag;

	i = 0;
	nbr_words = 0;
	flag = 1;
	while(argv[i])
	{
		if((argv[i] >= 33 && argv[i] < 127))
		{
			//printf("palavra\n");
			flag = 0;
			i++;
		}
		if(argv[i] == 32 || argv[i] == 9)
		{
			//printf("tab\n");
			i++;
			flag = 0;
		}
		nbr_words++;
	}
	return (nbr_words);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i], 1);
}

int	main(int argc, char *argv[])
{
	if(argc <= 1)
		write(1, "\n", 1);
	ft_rostring(argv[1]);
	return (0);
}