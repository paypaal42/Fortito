/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 15:27:39 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/06 11:56:53 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i - 1] < 48 || (str[i - 1] >= 58 && str[i - 1] <= 64)
				|| str[i - 1] > 122 || (str[i - 1] >= 91 && str[i - 1] <= 96))
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		i++;
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
	}
	return (str);
}