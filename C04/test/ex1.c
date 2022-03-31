/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:23:49 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/31 11:26:26 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "Hola mundo \n";
	ft_putstr(str);
	str = "Esto es una prueba \n";
	ft_putstr(str);
	str = "Otra prueba \n";
	ft_putstr(str);
	str = "En un lugar de la mancha... \n";
	ft_putstr(str);
	return (0);
}
