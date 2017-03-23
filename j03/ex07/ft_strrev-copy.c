char  *ft_strrev(char *str)
{
  int i;
  int j;
  int k;

  j = 0;
  i = 0;
  while (str[i])
    i++;
  i--;
  while (i >= j)
  {
    k = str[i];
    str[i] = str[j];
    str[j] = k;
    j++;
    i--;
  }
  return (str);
}
