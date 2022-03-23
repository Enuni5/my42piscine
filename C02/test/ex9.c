/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:17:39 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/23 08:24:59 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "Salut, coMment tU vAs ? 42mOts quaraNte-dEux; cinquante+et+un";
	int		i;

	i = 0;
	printf("Mi string es: ");
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");

	ft_strcapitalize(str);

	i = 0;
		printf("Mi string es: ");
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf(" ");

	return (0);
}
