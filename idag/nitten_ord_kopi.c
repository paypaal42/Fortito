/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 19:28:17 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/05 20:25:30 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int n;

	i = 0;
	j = 0;
	n = 0;
	while (dest[i])
		i++;
	while (str[j] && j < nb)
	{
		dest[j] = src[j];
		j++;
	}
	dest[i] = '\0';
	while (src[n])
		n++;
	if (size == i - 1)
		n--;
	return (n);
}
