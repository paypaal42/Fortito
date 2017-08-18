/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:25:46 by sycohen           #+#    #+#             */
/*   Updated: 2016/11/03 15:57:49 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst < src)
		while (len > i++)
			((unsigned char*)dst)[i - 1] = ((unsigned char *)src)[i - 1];
	else
		while (len-- != 0)
			((unsigned char*)dst)[len] = ((unsigned char*)src)[len];
	return (dst);
}
