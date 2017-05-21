/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 11:48:55 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/21 11:56:01 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *list_elem;
	t_list *free_elem;

	list_elem = *begin_list;
	while (list_elem)
	{
		free_elem = list_elem;
		list_elem = list_elem->next;
		free (free_elem);
	}
	begin_list = NULL;
}	
