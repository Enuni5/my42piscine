/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:19:00 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/22 09:07:33 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int x;
	int y;
	int *a;
	int *b;

	x = 11;
	y = 5;

	a = &x;
	b = &y;

	printf("Dividendo y divisor: ");
	printf("%d y ", x);
	printf("%d\n", y);
	ft_ultimate_div_mod(a, b);
	printf("Se convierten en cociente y resto: ");
	printf("%d y ", x);
	printf("%d\n", y);

	return (0);
}