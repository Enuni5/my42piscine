/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 07:34:23 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/22 07:44:20 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	putarr(int arr[], int size)
{
	for (int i = 0; i < (size - 1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[size - 1]);
}

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size;

	size = 5;
	printf("Original: ");
	putarr(tab, size);
	ft_rev_int_tab(tab, size);
	printf("Modified: ");
	putarr(tab, size);
	return (0);
}