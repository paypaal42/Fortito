/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 13:00:12 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/18 17:53:30 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;
	size_t			i;

	dst_tmp = (unsigned char*)dst;
	src_tmp = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dst_tmp[i] = src_tmp[i];
		i++;
		if (src_tmp[i - 1] == (unsigned char)c)
			return (&dst[i]);
	}
	return (0);
}
