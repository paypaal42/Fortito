/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 10:33:20 by pringsta          #+#    #+#             */
/*   Updated: 2017/04/13 11:16:40 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char 	*str;
	unsigned char	character;

	str = (unsigned char*)b;
	character = c;
	while (len-- > 0)
		*str++ = character;
	return (b);
}

int	main(void)
{
	char paal[10] = "OOOOOOOO";
	char paal1[10] = "OOOOOOOO";
	printf("%s\n", memset(paal, 97, 3));
	printf("%s\n", ft_memset(paal1, 97, 3));
	return (0);
}
