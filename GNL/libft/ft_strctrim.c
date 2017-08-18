/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:42:20 by sycohen           #+#    #+#             */
/*   Updated: 2016/11/03 10:44:16 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_white(char str, char c)
{
	return (str == c);
}

char		*ft_strctrim(char const *s, char c)
{
	char			*str;
	unsigned int	i;
	size_t			len;

	if (!s)
		return (0);
	i = 0;
	while (is_white(s[i], c))
		i++;
	len = ft_strlen((char *)s) - 1;
	while (len > i && is_white(s[len], c))
		len--;
	if (len < i)
		return (str = ft_strdup(""));
	str = ft_strsub(s, i, len - (size_t)i + 1);
	return (str);
}
