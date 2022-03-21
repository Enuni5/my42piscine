/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 10:06:04 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/18 13:58:32 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	m;
	char	p;

	m = 'N';
	p = 'P';
	if (n >= 0)
	{
		ft_putchar(p);
	}
	else if (n < 0)
	{
		ft_putchar(m);
	}
}
