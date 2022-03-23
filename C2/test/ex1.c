/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:40:11 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/23 14:43:30 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	origen[] = "Hola Mundo";
	char	destino[15];
	int		n = 6;

	printf("Este es mi string de origen: ");
	printf("%s \n", origen);
	ft_strncpy(destino, origen, n);
	printf("Este es mi string de destino: ");
	printf("%s \n", destino);
	return (0);
}