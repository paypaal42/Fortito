/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 09:10:40 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/06 14:13:46 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int x;
	int z;

	i = 0;
	x = 0;
	z = 0;
	while (str[i])
	{
		while (str[i] == to_find[x])
		{
			if (to_find[x + 1] == '\0')
				return (str + i - x);
			i++;
			x++;
		}
		x = 0;
		i = z;
		i++;
		z++;
	}
	return (NULL);
}
