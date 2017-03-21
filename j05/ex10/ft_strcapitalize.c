/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 16:52:12 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/21 17:02:11 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
				|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			i++;
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = (str[i] - 32);
			i++;
			while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A'
						&& str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + 32;
				i++;
			}
		}
		i++;
	}
	return (str);
}
