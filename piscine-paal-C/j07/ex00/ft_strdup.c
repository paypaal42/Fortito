/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 21:51:59 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/27 16:35:43 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str1;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	str1 = (char*)malloc(sizeof(str1) * (i + 1));
	if (str1 == NULL)
		return (0);
	while (src[j])
	{
		str1[j] = src[j];
		j++;
	}
	str1[j] = '\0';
	return (str1);
}
