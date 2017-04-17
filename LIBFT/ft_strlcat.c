/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 19:12:11 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/17 19:17:01 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (dest[i])
		i++;
	while (src[l])
		l++;
	while (dest[k])
		k++;
	while (src[j] && j < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	if (size > l && size > k)
		return (k + l);
	else if (l > size && k > size)
		return (k + l - 2);
	else
		return (k + l - 1);
}

