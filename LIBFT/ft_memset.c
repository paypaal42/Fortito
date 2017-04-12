#include "libft.h"

void  *ft_memset(void *str, int c, size_t len)
{
  unsigned char *dest;

  dest = (unsigned char*)str;
  while (len-- > 0)
    *dest++ = (unsigned char)c;
  return (str);
}
