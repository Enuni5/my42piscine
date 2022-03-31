/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:08:17 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/31 13:10:08 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < nb)
	{
		while (j < nb)
		{
			if (i * j == nb)
				return (0);
			j++;
		}
		j = 1;
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	else if ((nb + 1) != INT_MAX && ft_find_next_prime(nb + 1))
		return (nb + 1);
	else
		return (nb);
}

int	main(void)
{
	int	prime;

	prime = ft_find_next_prime(3);
	printf("%d", prime);
	return (0);
}
