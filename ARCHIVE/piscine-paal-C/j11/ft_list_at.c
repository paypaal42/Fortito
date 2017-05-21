/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 11:56:21 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/21 12:36:55 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int i;

	i = 1;
	if (!(begin_list))
		return (0);
	while (i < nbr && begin_list)
	{
		begin_list->next = begin_list;
		i++;
	}
	return (begin_list);
}
