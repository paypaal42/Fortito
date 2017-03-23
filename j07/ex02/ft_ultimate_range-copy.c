/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 15:26:58 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/23 12:07:10 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;
	int *paal;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (0);
	paal = (int*)malloc(sizeof(**range) * (size));
	if (paal == NULL)
		return (0);
	while (i < size)
	{
		paal[i] = min;
		min++;
		i++;
	}
	return (size);
}

int		main(void)
{
	int **range;
	int *range1;
	range = &range1;
	
	printf("%d\n", ft_ultimate_range(range, 1, 10));
	return (0);
}
