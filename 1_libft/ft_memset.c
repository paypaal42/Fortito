void  *memset(void *str, int c, size_t n)
{
    int i;
    
    i = 0; 
    while (str[i] && i < n)
    {
      str[i] == c;
      i++;
    }
}
