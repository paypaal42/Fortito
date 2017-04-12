/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 16:05:35 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/20 21:17:16 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	char	t1;
	unsigned	char	t2;
	unsigned	int		i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i])
	{
		if (i == n)
			return (0);
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
	}
	t1 = (unsigned char)s1[i];
	t2 = (unsigned char)s2[i];
	return (t1 - t2);
}
