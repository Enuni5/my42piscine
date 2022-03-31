/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:56:24 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/31 11:31:18 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	int	myi;

	myi = ft_atoi(" ---+--+1234ab567");
	printf("%i\n", myi);
	myi = ft_atoi(" ---+-+1234ab567");
	printf("%i\n", myi);
	myi = ft_atoi(" ---+--+ab567");
	printf("%i\n", myi);
	myi = ft_atoi(" ---+-+567ab567");
	printf("%i\n", myi);
	return (0);
}
