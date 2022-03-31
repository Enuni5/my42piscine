/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:09:51 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/31 08:26:16 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	thesame;

	thesame = 1;
	if (nb > 0)
	{
		while (thesame * thesame != nb)
		{
			thesame++;
			if (thesame >= (nb / 2))
				return (0);
		}
	}
	return (thesame);
}
