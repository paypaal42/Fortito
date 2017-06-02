/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringsta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:05:12 by pringsta          #+#    #+#             */
/*   Updated: 2017/06/01 17:20:06 by pringsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
# include "libft/libft.h"

int	get_next_line(int const fd, char ** line);

typedef	struct			s_gnl
{
	char				*beg;
	char				*end;
	size_t				size;
	char				*content;	
	struct				s_gnl *next;
}						t_gnl;

#endif

