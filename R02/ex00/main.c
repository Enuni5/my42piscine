/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:11:23 by enunez-n          #+#    #+#             */
/*   Updated: 2022/04/03 10:09:30 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

int	main(int ac, char **av)
{
	char	*nb;
	char	*dictpath;

	if (checkinput(ac, av, &nb, &dictpath) == 0 || check_nb(nb) == 0)
		ft_putstr("Error\n");
	return (0);
}
