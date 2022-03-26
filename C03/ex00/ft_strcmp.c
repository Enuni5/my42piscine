/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 07:08:19 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/25 12:47:58 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	s1len;
	unsigned int	s2len;
	int				i;

	i = 0;
	s1len = 0;
	s2len = 0;
	while (s1[i])
	{
		s1len += (s1[i] - '0');
		i++;
	}
	i = 0;
	while (s2[i])
	{
		s2len += (s2[i] - '0');
		i++;
	}
	if (s1len > s2len)
		return (s1len);
	else if (s1len < s2len)
		return (-s1len);
	else
		return (0);
}
