/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:07:28 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/19 18:58:42 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_horizontal(int x, int y, int a, int b)
{
	if (a == 1 || a == x || (a == 1 && b == y) || (a == x && b == y))
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	print_vertical(int x, int y, int a, int b)
{
	if ((a == 1 || a == x) && (1 < b < y))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		while (a <= x)
		{
			if (b == 1 || b == y)
			{
				print_horizontal(x, y, a, b);
			}
			else
				print_vertical(x, y, a, b);
			if (a == x)
				ft_putchar('\n');
			a++;
		}
		a = 1;
		b++;
	}
}
