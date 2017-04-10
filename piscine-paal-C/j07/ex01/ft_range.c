/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 14:07:38 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/28 14:36:27 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*table;
	int		i;
	long	size;

	i = 0;
	if (min >= max)
		return (NULL);
	size = (long)max - (long)min;
	if ((table = (int*)malloc(sizeof(table) * (size))) == NULL)
		return (NULL);
	while (min < max)
	{
		table[i] = min;
		min++;
		i++;
	}
	return (table);
}
