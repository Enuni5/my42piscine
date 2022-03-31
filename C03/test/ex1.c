/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:46:30 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/28 16:34:36 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, int n);

int	main(void)
{
	int	count;

	count = ft_strncmp("hola", "hola", 3);
	printf("%i\n", count);
	count = ft_strncmp("hala", "hola", 3);
	printf("%i\n", count);
	count = ft_strncmp("hola", "hala", 3);
	printf("%i", count);
	return (0);
}
