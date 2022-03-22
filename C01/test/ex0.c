/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex0.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:15:45 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/22 08:59:22 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	i;
	int	*nbr;

	i = 20;
	nbr = &i;
	printf("Valor anterior: ");
	printf("%d\n", i);
	ft_ft(nbr);
	printf("Valor nuevo: ");
	printf("%d\n", i);
	return (0);
}
