/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeff <jeff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:56:56 by jeff              #+#    #+#             */
/*   Updated: 2024/11/30 14:35:32 by jeff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	char *str;

	if(argc <= 1)
		return 1;
	i = 0;
	str = argv[1];
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if(str[i] > 'm') str[i] = (str[i] + (13 - 26));
			else str[i] = (str[i] + 13);
			write(1, &str[i], 1);
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			if(str[i] > 'M') str[i] = (str[i] + (13 - 26));
			else str[i] = (str[i] + 13);
			write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}