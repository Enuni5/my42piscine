/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:38:20 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/22 09:06:59 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int x;
	int y;
	int *a;
	int *b;

	x = 1;
	y = 2;
	a = &x;
	b = &y;

	printf("Valor de x e y: ");
	printf("%d, %d \n", x, y);
	ft_swap(a, b);
	printf("Valores intercambiados: ");
	printf("%d, %d", x, y);
	return (0);
}
