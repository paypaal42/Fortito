/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 16:38:28 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/14 19:02:31 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *restrict dst,
				const void *restrict src, size_t n)
{
	const char	*src_str;
	char		*dst_str;
	int i;

	i = 0;
	src_str = src;
	dst_str = dst;
	while (n > 0)
	{	
		*dst_str++ = *src_str++;
		n--;
	}
	return (dst);
}
