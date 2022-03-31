/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:33:45 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/26 16:21:45 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnow(int *a, int size)
{
	int	i;
	int	islower;

	i = 1;
	islower = 1;
	while (i < size)
	{
		if (a[i - 1] >= a[i])
			islower = 0;
		i++;
	}
	if (islower)
	{
		i = 0;
		while (i < size)
			ft_putchar(a[i++] + '0');
		if (a[0] < (10 - size))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	arr[10];

	i = 0;
	if (n == 1)
		while (i < 10)
			ft_putchar(i++ + '0');
	while (i < n)
		arr[i++] = 0;
	while (arr[0] <= (10 - n) && n > 1)
	{
		ft_printnow(arr, n);
		arr[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (arr[i] > 9)
			{
				arr[i - 1]++;
				arr[i] = 0;
			}
		}
	}
}


#include <unistd.h>

void	ft_print_combn(int n);

int	main(void)
{
	ft_print_combn(4);
	return (0);
}
 