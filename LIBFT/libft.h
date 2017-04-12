#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

void           *ft_memset(void *str, int c, size_t len);

typedef struct s_list
{
  void         *content;
  size_t       content_size;
  struct       s_list *next;
}              t_list;

#endif
