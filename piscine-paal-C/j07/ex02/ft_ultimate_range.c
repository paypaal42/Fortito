/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 15:26:58 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/28 20:38:22 by pringsta         ###   ########.fr       */
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

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;

	*range = ft_range(min, max);
	size = max - min;
	if (max <= min)
		return (0);
	return (size);
}
