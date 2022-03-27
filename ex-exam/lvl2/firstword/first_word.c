/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:56:18 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/25 07:58:38 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			if (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t')
				break ;
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
