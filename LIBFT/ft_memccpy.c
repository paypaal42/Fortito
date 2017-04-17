/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 13:00:12 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/17 12:40:58 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*src_str;
	unsigned char	*dst_str;
	unsigned char	c_char;
	size_t				i;

	i = 0;
	c_char = c;
	src_str = (unsigned char*)src;
	dst_str = (unsigned char*)dst;
	while (*src_str != c_char && i < n)
	{
		*dst_str++ = *src_str++;
		i++;
	}
	return (n == i) ? (NULL) : (dst_str + 1) ;
}
