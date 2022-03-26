/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:43:08 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/25 12:46:11 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
    char dest[20] = "Hola";
    char src[] = ", buenas tardes";
	unsigned int n = 10;
	printf("%s", ft_strncat(dest, src, n));
	return (0);
}
