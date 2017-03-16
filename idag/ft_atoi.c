#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str);

int ft_atoi(const char *str)
{
  int i;
  int result;
  int negatif;

  i = 0;
  result = 0; 
  negatif = 0; 
  if (str[0] == '-')
  {
    negatif = 1;
    i++;
  }
  if (str[0] == '+')
    i++;
  if (str[i] >= '0' && str[i] < '9') 
    while  (str[i] != '\0')
    { 
      result = result * 10 + (str[i] - '0');
      i ++;
    }
  if (negatif)
    return -result;
  else 
    return result;
}
int main ()
{
  printf("%d\n", ft_atoi("paal23"));
  printf(" atoi %d\n", atoi("pa23al"));
  printf("%d\n", ft_atoi("-32768"));
  printf("%d\n", atoi("+2147483647"));
}
