/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:26:36 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/23 14:05:37 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	bool	mayus;
	bool	minus;

	i = 0;
	mayus = 1;
	minus = 1;
	while (str[i])
	{
		mayus = (str[i] >= 65 && str[i] <= 90);
		minus = (str[i] >= 97 && str[i] <= 122);
		if (!(mayus || minus))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
