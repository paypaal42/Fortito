/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 12:22:27 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/18 14:53:57 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	s_len;
	char	c_char;
	char	*s_str;

	i = 0;
	s_len = ft_strlen(s);
	c_char = c;
	s_str = (char*)s;
	while (s_str[i] != c_char && i <= s_len)
	{
		if (s_str[i] == c_char)
			return (s_str);
		else
			i++;
	}
	if (i > s_len)
		return (NULL);
	else
		return (&s_str[i]);
}
