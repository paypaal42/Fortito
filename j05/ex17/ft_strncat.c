/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 18:40:50 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/19 18:46:26 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;
	char tab[];

	i = 0;
	j = 0;
	while (src[i] != '\0' && i < nb)
	{
		tab[i] = src[i];
		i++; //return tab ?
	}
	while (dest[j] != '\0' && (i + j) < nb)
	{
		tab[i + j] = dest[j];
		j++;
	}
	return (tab);
}
