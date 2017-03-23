/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 14:07:38 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/23 12:13:08 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *table;
	long size;

	if (min >= max)
		return (0);
	size = (long)max - (long)min;
	if ((table = (int*)malloc(sizeof(*table) * (size))) == NULL)
		return (NULL);
	while (min < max)
	{
		table[min] = min;
		min++;
	}
	return (table);
}
