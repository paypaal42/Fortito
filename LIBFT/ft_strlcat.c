/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 19:12:11 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/18 12:18:44 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_size;
	size_t	src_len;

	j = 0;
	i = ft_strlen(dest);
	dest_size = sizeof(dest);
	src_len = ft_strlen(src);
	if (size > dest_size - src_len)
		size = dest_size - src_len;
	while (*src != '\0' && j < size)
		dest[i++] = src[j++];
	if (size == src_len)
	{
		dest[dest_size] = '\0';
		return (dest_size);
	}
	else
	{
		dest[i] = '\0';
		return(i);
	}
}

