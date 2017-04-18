/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 15:48:56 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/18 18:34:11 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_str;
	size_t			i;

	i = 0;
	s_str = (unsigned char*)s;
	while (s_str[i] != (unsigned char)c && s_str[i] && i < n)
	{
		i++;
	}
	return (n == i) ? (NULL) : (s_str + i);
}
