/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:43:29 by enunez-n          #+#    #+#             */
/*   Updated: 2022/04/01 07:32:38 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	power;
	int	nbr;

	nbr = 2;
	power = 8;
	printf("%i elevado a %i: ", nbr, power);
	printf("%d\n", ft_iterative_power(nbr, power));
	nbr = 5;
	power = 5;
	printf("%i elevado a %i: ", nbr, power);
	printf("%d\n", ft_iterative_power(nbr, power));
	nbr = 8;
	power = 4;
	printf("%i elevado a %i: ", nbr, power);
	printf("%d\n", ft_iterative_power(nbr, power));
	nbr = 10;
	power = 7;
	printf("%i elevado a %i: ", nbr, power);
	printf("%d\n", ft_iterative_power(nbr, power));
	return (0);
}
