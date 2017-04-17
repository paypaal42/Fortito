/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:42:46 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/17 14:21:45 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;
	unsigned	char	*src_str;
	unsigned	char	*dst_str;
	src_str = (unsigned char*)src;
	dst_str = (unsigned char*)dst;	
	while (len > 0)
	{
		*dst_str++ = *src_str++;
		len--;
	}
	return (dst);
}
