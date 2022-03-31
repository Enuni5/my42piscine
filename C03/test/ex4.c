/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:42:18 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/28 17:00:36 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	pajar[]= "Hola que tal";
	char	aguja[]= "q";
	char	*ptr;

	ptr = ft_strstr(pajar, aguja);
	printf("%s\n", ptr);
	ptr = strstr(pajar, aguja);
	printf("%s", ptr);
	return (0);
}
