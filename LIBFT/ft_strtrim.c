/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 15:27:48 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/22 19:06:00 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start;
	size_t	len;
	size_t	end;

	i = 0;
	start = 0;
	end = 0;
	while (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
		i++;
	start = i;
	while (s[i])
		i++;
	i--;
	while (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
	{
		i--;
		end++;
	}
	len = i - start + 1;
	return (start == 0 && end == 0) ? ((char*)s) : (ft_strsub(s, start, len));
	if (s[start] == 0)
		return (ft_strnew(0));
}
