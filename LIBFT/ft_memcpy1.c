/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 16:38:28 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/17 17:35:57 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy1(void *dst, const void *src, size_t n)
{
	const char	*src_str;
	char		*dst_str;
	size_t		a;
	size_t		b;
	size_t		c;
	size_t		i;

	b = *(&src + 1) - src;
	c = sizeof(src) / sizeof(char);
	src_str = src;
	dst_str = dst;
	a = sizeof(dst_str);
	i = 0;
	printf("sizeof dst-------> %zu\n", a);
	printf("sizeof src-------> %zu\n", b);
	while (n > 0)
	{
		*dst_str++ = *src_str++;
		n--;
	}
	while (*dst_str++)
		i++;
	*dst_str++ = '\0';
	return (dst);
}
