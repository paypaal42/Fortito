/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:04:49 by sycohen           #+#    #+#             */
/*   Updated: 2016/11/04 15:10:11 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		if (ft_memcmp(haystack, needle, ft_strlen((char *)needle)) == 0)
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
