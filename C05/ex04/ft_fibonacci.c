/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:37:17 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/30 18:08:24 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 2)
		return (index);
	if (index >= 0)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	if (index < 0)
		return (-1);
	return (0);
}

