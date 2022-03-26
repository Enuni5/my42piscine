/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:46:30 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/25 12:47:12 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, int n);

int	main(void)
{
	int	count;

	count = ft_strncmp("hola que tal ", "estas", 5);
	printf("%i", count);
	return (0);
}
