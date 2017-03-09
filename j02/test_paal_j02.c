#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);

#include "ex00/ft_print_alphabet.c"
//#include "/j02/ex00/ft_print_alphabet.c"

int main()
{
  printf("---------------------ex00-----------------------\n"); 
  printf("Expected: abcdefghijklmnopqrstuvwxyz\n");
  //printf("Result  : %s\n", ft_print_alphabet(void));
  printf("Result  : "); 
  ft_print_alphabet();
  putchar('\n');
  printf("------------------------------------------------");
}



/*
printf("%d\n", ft_atoi("paal23"));
//printf("%i\n", ft_strlen("coucou\0"));




*/



