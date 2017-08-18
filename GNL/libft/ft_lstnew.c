/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:18:45 by sycohen           #+#    #+#             */
/*   Updated: 2016/11/04 11:52:40 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_list;

	if (!(new_list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content || !content_size)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	else
	{
		if (!(new_list->content = ft_memalloc(content_size)))
		{
			free(new_list);
			return (NULL);
		}
		new_list->content_size = content_size;
		ft_memcpy(new_list->content, content, content_size);
	}
	new_list->next = NULL;
	return (new_list);
}
