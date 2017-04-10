#include <stdio.h>

char  *ft_strrev(char *str)
{
  int i;
  int j;
  int k;
  char *dest;

  j = 0;
  i = 0;
  while (str[i])
    i++;
  i--;
  while (i >= k)
  {
    dest[j] = str[i];
    i--;
    j++;
  }
  dest[j] = '\0';
  return (dest);
}
