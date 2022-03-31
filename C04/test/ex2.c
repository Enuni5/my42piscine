/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:14:01 by jseijo-p          #+#    #+#             */
/*   Updated: 2022/03/31 11:32:19 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(123456);
	printf("\n");
	ft_putnbr(INT_MIN);
	printf("\n");
	ft_putnbr(INT_MAX);
	printf("\n");
	ft_putnbr(-58);
	printf("\n");
	ft_putnbr(0);
	return (0);
}
