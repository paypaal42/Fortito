/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:58:16 by sycohen           #+#    #+#             */
/*   Updated: 2016/11/03 10:58:29 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	int		len;
	size_t	h;

	len = ft_strlen(dst);
	h = 0;
	while (h < n && h < ft_strlen((char *)src))
	{
		dst[len + h] = src[h];
		h++;
	}
	dst[len + h] = '\0';
	return (dst);
}
