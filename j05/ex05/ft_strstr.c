/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 21:57:04 by pringsta          #+#    #+#             */
/*   Updated: 2017/03/19 22:40:12 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  *ft_strstr(char *str, char *to_find)
{
  int i;
  int j;
  int k;

  i = 0;
  j = 0;
  k = 0;
  while (str[i])
  {
    while (str[i] == to_find[j])
    {
      if (to_find[j + 1] == '\0')
      
        return (str + i);
      i++;
      j++;
    }
    j = 0;
    i = k;
    i++;
    k++;
  }
  return (NULL);
}