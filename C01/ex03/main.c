/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:58:35 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/21 20:42:43 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	div;
	int	mod;

	div = 0;
	mod = 0;
	printf("%d\n", div);
	printf("%d\n", mod);
	ft_div_mod(11, 5, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
}
