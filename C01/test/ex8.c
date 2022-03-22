/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:20:15 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/22 08:32:46 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	putarr(int arr[], int size)
{
	for (int i = 0; i < (size - 1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[size - 1]);
}

int	main(void)
{
	int	size;
	int	tab[] = {51, 25, 3, -46, 1};

	size = 5;
	printf("Original: ");
	putarr(tab, size);
	ft_sort_int_tab(tab, size);
	printf("Modified: ");
	putarr(tab, size);
}
