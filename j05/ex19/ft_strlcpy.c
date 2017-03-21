/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 10:43:03 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/21 10:48:21 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i + j] = '\0';
	return (i + j - 1);
}
