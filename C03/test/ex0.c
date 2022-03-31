/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex0.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:47:32 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/28 16:33:58 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int	count;

	count = ft_strcmp("hola", "hola");
	printf("%i\n", count);
	count = ft_strcmp("hala", "hola");
	printf("%i\n", count);
	count = ft_strcmp("hola", "hala");
	printf("%i", count);
	return (0);
}
