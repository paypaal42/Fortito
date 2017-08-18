/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:03:49 by sycohen           #+#    #+#             */
/*   Updated: 2016/11/04 16:53:19 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nb_length(int n)
{
	int i;

	i = 2 + (n < 0);
	while ((n = n / 10))
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		neg;

	if (n < 0)
		neg = -1;
	else
		neg = 1;
	len = nb_length(n);
	if (!(str = (char *)malloc(len--)))
		return (NULL);
	str[len--] = '\0';
	str[len--] = neg * (n % 10) + 48;
	while ((n = n / 10))
		str[len--] = neg * (n % 10) + 48;
	if (neg < 0)
		str[len] = '-';
	return (str);
}
