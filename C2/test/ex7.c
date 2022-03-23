/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:17:39 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/22 17:51:51 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "hOla! mUndo? 12";
	int		i;

	i = 0;
	printf("Mi string es: ");
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	ft_strupcase(str);
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
