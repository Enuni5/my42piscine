/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:17:39 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/22 16:13:26 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str;
	int		mybool;

	mybool = 0;
	str = "afsd123$%&/)(!";
	mybool = ft_str_is_printable(str);
	printf("Mi string es: %s\n", str);
	printf("Este valor resulta como: %d\n", mybool);
	return (mybool);
}
