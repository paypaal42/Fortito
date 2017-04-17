/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 17:54:42 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/17 18:17:43 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_str;
	unsigned char	*s2_str;

	i = 0;
	s1_str = (unsigned char*)s1;
	s2_str = (unsigned char*)s2;
	while (s1_str[i] == s2_str[i] && i < n )
		i++;
	return (n == i) ? (0) : (s1_str[i] - s2_str[i]);
}
