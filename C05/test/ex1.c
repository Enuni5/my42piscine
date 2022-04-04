/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:43:49 by enunez-n          #+#    #+#             */
/*   Updated: 2022/04/03 21:21:42 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	factorial;

	factorial = 8;
	printf("El factorial, calculado recursivamente, de %i: ", factorial);
	printf("%d\n", ft_recursive_factorial(factorial));
	factorial = 5;
	printf("El factorial, calculado recursivamente, de %i: ", factorial);
	printf("%d\n", ft_recursive_factorial(factorial));
	factorial = 19;
	printf("El factorial, calculado recursivamente, de %i: ", factorial);
	printf("%d\n", ft_recursive_factorial(factorial));
	factorial = 20;
	printf("El factorial, calculado recursivamente, de %i: ", factorial);
	printf("%d\n", ft_recursive_factorial(factorial));
	return (0);
}
