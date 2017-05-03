/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 15:27:48 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/03 14:43:22 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   static char    *ft_strtrim1(char const *s)
   {
   int		end;
   int		beg;
   char	*dst;
   int		i;
   int 	j;

   if (s)
   {
   i = 0;
   j = 0;
   while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
   i++;
   beg = i;
   i = ft_strlen(s);
   while ((s[i - 1] == '\n' || s[i - 1] == ' ' || s[i - 1] == '\t') && beg < i)
   {
   i--;
   j++;
   }
   printf("j: %d\n", j);
   end = ft_strlen(s) - j - beg;
   printf("end: %d\n", end);
   printf("beg:%d, end: %d, i: %d\n", beg, end, i);
   dst = ft_strsub(s, beg, end);
   return (dst);
   }
   return (0);
   }
   */

char	*ft_strtrim(char const *s)
{
	char const			*end;
	char const			*beg;
	char				*dst;
	unsigned int		i;

	if (s)
	{
		i = 0;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		beg = (s + i);
		end = (s + i);
		while (s[i])
		{
			if (s[i] >= 33 && s[i] <= 126)
				end = s + i;
			i++;
		}
		if ((end - beg) > 0)
			end++;
		dst = ft_strsub(s, beg - s, end - beg);
		return (dst);
	}
	return (0);
}


/*
   int	main(void)
   {
   char *s = "    ";
   int i = 0;
   while (s[i])
   i++;
   printf("%d\n", i);
   ft_strtrim(s);
   ft_strtrim1(s);
   return (0);
   }
   */
