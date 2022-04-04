/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:39:20 by enunez-n          #+#    #+#             */
/*   Updated: 2022/04/03 18:57:12 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_H
# define FT_FT_H

# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

typedef struct dict_struct
{
	unsigned int	nb;
	char			*name;
}					t_nb_plus_name;

void				ft_putstr(char *str);
unsigned int		ft_atoi(char *str);
int					checkinput(int argc, char **argv, char **nb,
						char **dictpath);
int					check_nb(char *nb);

#endif
