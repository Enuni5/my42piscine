/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:18:55 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/21 20:21:21 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int cociente;
	int resto;

	cociente = *a / *b;
	resto = *a % *b;
	*a = cociente;
	*b = resto;
}