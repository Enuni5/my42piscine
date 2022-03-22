/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:58:35 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/22 09:07:11 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	div;
	int	mod;
	int a;
	int b;

	div = 0;
	mod = 0;
	a = 11;
	b = 5;

	printf("Valores a dividir: ");
	printf("%d y ", a);
	printf("%d\n", b);
	ft_div_mod(a, b, &div, &mod);
	printf("Cociente y resto: ");
	printf("%d y ", div);
	printf("%d\n", mod);
	return (0);
}
