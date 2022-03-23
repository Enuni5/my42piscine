/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex0.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:06:32 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/23 14:43:52 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	origen[] = "Hola Mundo";
	char	destino[15];

	printf("Este es mi string de origen: ");
	printf("%s \n", origen);
	ft_strcpy(destino, origen);
	printf("Este es mi string de destino: ");
	printf("%s \n", destino);
	return (0);
}
