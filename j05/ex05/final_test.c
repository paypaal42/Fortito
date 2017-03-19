/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 21:57:04 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/19 22:17:23 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		compare_str(char c, char d)
{
	return (c == d) ? (1) : (0);
}

int		str_length(char *needle)
{
	int i;

	i = 0;
	while (needle[i] != '\0')
		i++;
	return (i);
}

int		main(void)
{
	int i1 = 0;
	int n2 = 0;
	int v3 = 0;
	int t = 0;

	char hay[12] = "psere ere tt";
	char needle[5] = "ere";
	char output[10];

	while (hay[i1] != '\0')
	{
		v3 = i1;
		if (compare_str(hay[v3], needle[t]))	
		{
			while (n2 < str_length(needle) && compare_str(hay[v3], needle[t]))
			{  	
				v3++;
				t++;
				n2++;
			}
			t = 0;
			if (n2 == str_length(needle))
			{
				while (hay[i1] != '\0')
				{
					output[t] = hay[i1];
					i1++;
					t++;
				}
			return (i1);	
			}
			else 
				v3 = 0;
		}
		else 
		{
			printf("hay[%d] : %c %c : needle[%d], Boolean: %d\n -----------------------------------------------------------------------\n", i1, hay[i1], needle[0], 0, compare_str(hay[i1], needle[0]));
	}
	i1++;
	}
	return(0);
}
