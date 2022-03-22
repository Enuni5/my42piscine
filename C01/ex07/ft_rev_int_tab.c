/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 07:34:21 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/22 08:47:17 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	ini;
	int	fin;

	aux = 0;
	ini = 0;
	fin = size - 1;
	while (ini < fin)
	{
		aux = tab[ini];
		tab[ini] = tab[fin];
		tab[fin] = aux;
		ini++;
		fin--;
	}
}
