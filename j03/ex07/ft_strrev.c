#include <stdio.h>
#include <unistd.h>

char  *ft_strrev(char *str)
{
  int i;
  int j;
  char *dest;

  j = 0;
  i = 0;
  while (str[i])
    i++;
  i--;
  while (i >= 0)
  {
    dest[j] = str[i];
    i--;
    j++;
  }
  dest[j] = '\0';
  return (dest);
}

int main(void)
{
  printf("%s\n", ft_strrev("paal"));
  return (0);
}
