/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:03:48 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/24 08:04:53 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int		i;
	char	letra;

	i = 122;
	while (i >= 97)
	{
		if (i % 2 == 0)
		{
			ft_putchar(i);
		}
		else
		{
			ft_putchar(i - 32);
		}
		i--;
	}
	ft_putchar('\n');
	return (0);
}
