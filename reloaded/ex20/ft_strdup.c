/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 12:36:30 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/11 12:49:44 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;	
	while (src[i])
		i++;
	i += 1;
	if (!(str = (char*)malloc(sizeof(str) * i)))
   		return NULL;
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';	
	return (str);
}
