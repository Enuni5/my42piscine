/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex0.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 07:18:11 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/31 11:30:46 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		length;

	length = 0;
	str = "Hola mundo";
	length = ft_strlen(str);
	printf("%s\n", str);
	printf("Longitud del string: ");
	printf("%d\n", length);
	str = "Prueba";
	length = ft_strlen(str);
	printf("%s\n", str);
	printf("Longitud del string: ");
	printf("%d\n", length);
	str = "Otra prueba";
	length = ft_strlen(str);
	printf("%s\n", str);
	printf("Longitud del string: ");
	printf("%d\n", length);
	str = "En un lugar de la mancha...";
	length = ft_strlen(str);
	printf("%s\n", str);
	printf("Longitud del string: ");
	printf("%d\n", length);
	return (0);
}
