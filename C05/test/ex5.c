/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex5.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:25:19 by enunez-n          #+#    #+#             */
/*   Updated: 2022/04/03 21:28:41 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	radicand;

	radicand = 2147395600;
	printf("La raiz cuadrada entera de %i, si existe, es: ", radicand);
	printf("%d\n", ft_sqrt(radicand));
	radicand = 6;
	printf("La raiz cuadrada entera de %i, si existe, es: ", radicand);
	printf("%d\n", ft_sqrt(radicand));
	radicand = 4;
	printf("La raiz cuadrada entera de %i, si existe, es: ", radicand);
	printf("%d\n", ft_sqrt(radicand));
	radicand = INT_MAX;
	printf("La raiz cuadrada entera de %i, si existe, es: ", radicand);
	printf("%d\n", ft_sqrt(radicand));
	radicand = 25;
	printf("La raiz cuadrada entera de %i, si existe, es: ", radicand);
	printf("%d\n", ft_sqrt(radicand));
	radicand = INT_MAX;
	printf("La raiz cuadrada entera de %i, si existe, es: ", radicand);
	printf("%d\n", ft_sqrt(radicand));
	radicand = INT_MAX;
	printf("La raiz cuadrada entera de %i, si existe, es: ", radicand);
	printf("%d\n", ft_sqrt(radicand));
	radicand = 69;
	printf("La raiz cuadrada entera de %i, si existe, es: ", radicand);
	printf("%d\n", ft_sqrt(radicand));
	return (0);
}
