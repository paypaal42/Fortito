/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 10:39:17 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/21 20:56:04 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (dest[i])
		i++;
	while (src[l])
		l++;
	while (dest[k])
		k++;
	while (src[j] && j < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	if (size > l && size > k)
		return (k + l);
	else if (l > size && k > size)
		return (k + l - 2);
	else
		return (k + l - 1);
}
