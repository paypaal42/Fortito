/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 15:39:34 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/18 15:47:55 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	s_len;
	char	c_char;
	char	*s_str;

	i = ft_strlen(s);
	s_len = ft_strlen(s);
	c_char = c;
	s_str = (char*)s;
	while (s_str[i] != c_char && i > 0)
	{
		if (s_str[i] == c_char)
			return (s_str);
		else
			i--;
	}
	if (i == 0)
		return (NULL);
	else
		return (&s_str[i]);
}
