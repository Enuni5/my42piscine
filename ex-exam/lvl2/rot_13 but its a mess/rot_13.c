/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:18:02 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/24 18:27:46 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	remind;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 97 && argv[1][i] <= 122)
		{
			if (122 - argv[1][i] <= 13)
			{
				remind = 122 - (argv[1][i] - '0');
				argv[1][i] = (97 + 13 - remind) + '0';
				ft_putchar(argv[1][i]);
			}
			else
			{
				argv[1][i] = (argv[1][i] + 13) + '0';
				ft_putchar(argv[1][i]);
			}
		}
		else if (argv[1][i] >= 65 && argv[1][i] <= 90)
		{
			if (90 - argv[1][i] <= 13)
			{
				remind = 90 - (argv[1][i] - '0');
				argv[1][i] = (65 + 13 - remind) + '0';
				ft_putchar(argv[1][i]);
			}
			else
			{
				argv[1][i] = (argv[1][i] + 13) + '0';
				ft_putchar(argv[1][i]);
			}
		}
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
