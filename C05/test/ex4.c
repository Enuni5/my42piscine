/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:08:52 by enunez-n          #+#    #+#             */
/*   Updated: 2022/04/02 11:29:33 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	fibopos;

	fibopos = 2;
	printf("La posición %i de fibonacci es: ", fibopos);
	printf("%d\n", ft_fibonacci(fibopos));
	fibopos = -123456;
	printf("La posición %i de fibonacci es: ", fibopos);
	printf("%d\n", ft_fibonacci(fibopos));
	fibopos = 5;
	printf("La posición %i de fibonacci es: ", fibopos);
	printf("%d\n", ft_fibonacci(fibopos));
	fibopos = 9;
	printf("La posición %i de fibonacci es: ", fibopos);
	printf("%d\n", ft_fibonacci(fibopos));
	fibopos = 13;
	printf("La posición %i de fibonacci es: ", fibopos);
	printf("%d\n", ft_fibonacci(fibopos));
	return (0);
}
