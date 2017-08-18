/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strequ.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 14:04:29 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/02 13:24:44 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	else
	{
		while (s1[i] && s2[i] && s1[i] == s2[i])
			i++;
	}
	return (s1[i] - s2[i] == 0) ? (1) : (0);
}
