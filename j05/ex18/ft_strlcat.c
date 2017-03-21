/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 10:39:17 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/21 10:39:36 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
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
	if ((i + j) <= size)
		return (i + j - 1);
	else
		return (size - 1 - j);
}
