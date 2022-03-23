/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:26:45 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/23 14:33:19 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main() 
{
    char *str = "Coucou\ntu vas bien ?";
    printf("La frase es: %s \n", str);
    ft_putstr_non_printable(str);
    return(0);
}