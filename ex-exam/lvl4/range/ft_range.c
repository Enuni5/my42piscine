/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:33:09 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/25 13:33:14 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	intlen(int start, int end)
{
	int	size;

	size = 0;
	if (start > end)
	{
		size = start - end + 1;
	}
	else if (end > start)
	{
		size = end - start + 1;
	}
	else
		return (0);
	return (size);
}

int	checksign(int nbr)
{
	if (nbr >= 0)
		return (nbr);
	else
		return (-nbr);
}

int	*ft_range(int start, int end)
{
	int	*intarray;
	int	size;
	int	i;

	size = intlen(checksign(start), checksign(end));
	intarray = malloc(size * sizeof(int));
	if (!intarray)
		return (0);
	i = 0;
	if (size == 1)
		intarray[0] = start;
	if (start < end)
	{
		while (i < size)
		{
			intarray[i] = start + i;
			i++;
		}
	}
	else if (start > end)
	{
		while (i < size)
		{
			intarray[i] = start - i;
			i++;
		}
	}
	return (intarray);
}

int	main(void)
{
	int	start;
	int	end;
	int	i;
	int	*array;
	int	size;

	start = -5;
	end = -8;
	i = 0;
	size = intlen(checksign(start), checksign(end));
	array = ft_range(start, end);
	while (i < size)
	{
		printf("%i", array[i]);
		i++;
	}
	return (0);
}
