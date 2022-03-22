/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:22:17 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/22 09:06:40 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int i;
	int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	i = 10;
	ptr = &i;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;

	printf("Valor anterior: ");
	printf("%d \n", i);
	ft_ultimate_ft(ptr9);
	printf("Valor nuevo y todos los punteros: ");
	printf("%d\n", i);
	printf("%p\n", ptr);
	printf("%p\n", ptr2);
	printf("%p\n", ptr3);
	printf("%p\n", ptr4);
	printf("%p\n", ptr5);
	printf("%p\n", ptr6);
	printf("%p\n", ptr7);
	printf("%p\n", ptr8);
	printf("%p\n", ptr9);

	return (0);
}