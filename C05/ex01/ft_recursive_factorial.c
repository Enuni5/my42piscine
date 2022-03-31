/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:43:24 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/30 11:44:36 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	n = nb;
	return (n * ft_recursive_factorial(nb - 1));
}
