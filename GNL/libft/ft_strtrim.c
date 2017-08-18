/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:06:00 by sycohen           #+#    #+#             */
/*   Updated: 2016/11/03 11:07:02 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_white(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char			*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	i;
	size_t			len;

	if (!s)
		return (0);
	i = 0;
	while (is_white(s[i]))
		i++;
	len = ft_strlen((char *)s) - 1;
	while (len > i && is_white(s[len]))
		len--;
	if (len < i)
		return (str = ft_strdup(""));
	str = ft_strsub(s, i, len - (size_t)i + 1);
	return (str);
}
