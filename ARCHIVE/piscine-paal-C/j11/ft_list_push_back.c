/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 15:19:34 by pringsta          #+#    #+#             */
/*   Updated: 2017/05/21 10:51:57 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push_back(t_list **begin_list, void *data);
{
	t_list *list;

	list = *begin_list;
	if (!(begin_list))
		begin_list = ft_create_elem(data);
	while (list)
		list = list->next;
	list = ft_create_elem(data);
}
