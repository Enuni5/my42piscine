/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 07:28:18 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/28 16:57:25 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	offset;
	unsigned int	src_index;
	unsigned int	dstlen;
	unsigned int	srclen;

	offset = 0;
	while (dest[offset] != '\0')
		offset++;
	dstlen = offset;
	src_index = 0;
	while (src[src_index] != '\0')
		src_index++;
	srclen = src_index;
	src_index = 0;
	while (src[src_index] != '\0' && src_index + offset < size)
	{
		dest[offset] = src[src_index];
		offset++;
		src_index++;
		if (offset == size - 1)
			break ;
	}
	dest[offset] = '\0';
	return (dstlen + srclen);
}
