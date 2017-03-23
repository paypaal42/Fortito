/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 14:07:38 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/22 18:48:53 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *table;
	int size;

	if (min >= max)
		return (0);
	size = max - min;
	if ((table = (int*)malloc(sizeof(*table) * (size))) == NULL)
		return NULL;
	while (min < max)
	{
		table[min] = min;
		printf("%d", min);
		min++;
	}
	return (&*table);
}

int 	main(void)
{
	ft_range(-4, 9);
	return (0);
}
