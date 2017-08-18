/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:21:03 by sycohen           #+#    #+#             */
/*   Updated: 2016/11/07 13:23:56 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	k;

	k = 0;
	while (k < n)
	{
		if (((unsigned char*)src)[k] == (unsigned char)c)
		{
			((char*)dst)[k] = ((char*)src)[k];
			return (&dst[++k]);
		}
		((char*)dst)[k] = ((char*)src)[k];
		k++;
	}
	return (NULL);
}
