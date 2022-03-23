/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:17:39 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/22 18:06:43 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "HoLa! MunDo? 12";
	int		i;

	i = 0;
	printf("Mi string es: ");
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");

	ft_strlowcase(str);

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
