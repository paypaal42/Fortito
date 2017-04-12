/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 15:45:10 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/20 19:31:15 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int negative;
	int nb;

	i = 0;
	negative = 0;
	nb = 0;
	while ((str[i] > 8 && str[i] < 33) || (str[i] >= 0 && str[i] < 7)
			|| str[i] == 127)
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (negative) ? (-nb) : (nb);
}
