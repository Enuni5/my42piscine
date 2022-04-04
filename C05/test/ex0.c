/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex0.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:41:27 by enunez-n          #+#    #+#             */
/*   Updated: 2022/04/01 07:49:31 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	factorial;

	factorial = 8;
	printf("El factorial, calculado iterativamente, de %i: ", factorial);
	printf("%d\n", ft_iterative_factorial(factorial));
	factorial = 5;
	printf("El factorial, calculado iterativamente, de %i: ", factorial);
	printf("%d\n", ft_iterative_factorial(factorial));
	factorial = 3;
	printf("El factorial, calculado iterativamente, de %i: ", factorial);
	printf("%d\n", ft_iterative_factorial(factorial));
	factorial = 10;
	printf("El factorial, calculado iterativamente, de %i: ", factorial);
	printf("%d\n", ft_iterative_factorial(factorial));
	return (0);
}
