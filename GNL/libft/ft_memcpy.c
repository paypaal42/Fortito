/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:20:49 by sycohen           #+#    #+#             */
/*   Updated: 2016/11/07 13:20:15 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char	*src;
	char	*dst;

	if (n == 0 || str1 == str2)
		return (str1);
	dst = (char *)str1;
	src = (char *)str2;
	while (--n)
		*dst++ = *src++;
	*dst = *src;
	return (str1);
}
