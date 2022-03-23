/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:17:39 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/23 14:27:14 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;
	int		mybool;

	mybool = 0;
	str = "holamundo";
	mybool = ft_str_is_lowercase(str);
	printf("Mi string es: %s\n", str);
	printf("Este valor resulta como: %d\n", mybool);
	return (mybool);
}
