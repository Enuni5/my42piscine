/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex6.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:07:27 by enunez-n          #+#    #+#             */
/*   Updated: 2022/04/01 13:36:43 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	maybeprime;

	maybeprime = INT_MAX;
	printf("¿Es %i un número primo? ", maybeprime);
	printf("%i\n", ft_is_prime(maybeprime));
	maybeprime = INT_MAX;
	printf("¿Es %i un número primo? ", maybeprime);
	printf("%i\n", ft_is_prime(maybeprime));
	maybeprime = INT_MAX;
	printf("¿Es %i un número primo? ", maybeprime);
	printf("%i\n", ft_is_prime(maybeprime));
	maybeprime = INT_MAX;
	printf("¿Es %i un número primo? ", maybeprime);
	printf("%i\n", ft_is_prime(maybeprime));
	maybeprime = 5;
	printf("¿Es %i un número primo? ", maybeprime);
	printf("%i\n", ft_is_prime(maybeprime));
	maybeprime = 50;
	printf("¿Es %i un número primo? ", maybeprime);
	printf("%i\n", ft_is_prime(maybeprime));
	maybeprime = 987654321;
	printf("¿Es %i un número primo? ", maybeprime);
	printf("%i\n", ft_is_prime(maybeprime));
	return (0);
}
