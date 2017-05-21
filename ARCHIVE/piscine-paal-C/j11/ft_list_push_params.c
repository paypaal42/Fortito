/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 11:28:23 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/21 11:48:37 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	t_list *ft_list_push_params(int ac, char **av)
{
	int i;
	t_list *new_elem;
	t_list *prev_elem;

	i = 1;
	new_elem = ft_create_element(av[i++]);
	while (av[i])
	{	
		prev_elem = new_elem;
		new_elem->data = av[i];
		new_elem->next = prev_elem;
		i++;
	}
	return (new_elem);
}
