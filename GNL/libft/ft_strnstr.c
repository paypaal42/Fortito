/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:02:06 by sycohen           #+#    #+#             */
/*   Updated: 2016/11/03 11:02:34 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len;

	if (*needle == '\0')
		return ((char*)haystack);
	len = ft_strlen((char *)needle);
	while (*haystack != '\0' && n-- >= len)
	{
		if (ft_memcmp(haystack, needle, len) == 0)
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
