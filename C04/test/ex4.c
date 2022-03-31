/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:54:52 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/31 11:33:10 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(8, "poniguay");
	printf("\n");
	ft_putnbr_base(150, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(5, "01");
	return (0);
}
