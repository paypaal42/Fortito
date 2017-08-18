/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 09:13:45 by sycohen           #+#    #+#             */
/*   Updated: 2016/11/12 09:40:24 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_power(size_t num, size_t power)
{
	size_t i;

	if (num == 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (num);
	i = num;
	if (power > 10)
		return (0);
	if (power > 1)
		while (power-- != 1)
			num = i * num;
	return (num);
}
