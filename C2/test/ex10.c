/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:41:36 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/23 14:36:33 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[6];
	char	*src;

	src = "Hola Mundo";
	
	printf("%d", ft_strlcpy(dest, src, 10));
	printf(" ");
	printf("%s", dest);
	return (0);
}
