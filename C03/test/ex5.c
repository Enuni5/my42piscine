/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex5.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:41:26 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/28 16:58:13 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[50] = "Buenas tardes que tal.";
	char	src[] = "x";
	int		n;

	n = 50;
	printf("%d \n", ft_strlcat(dest, src, n));
	printf("%lu", strlcat(dest, src, n));
	return (0);
}
