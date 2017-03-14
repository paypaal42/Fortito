#include <stdio.h>
#include <unistd.h>
#include "ex00/ft_iterative_factorial.c"

int		main(void)
{
	printf("\n------------EX01-----------\n");
	printf("%d\n", ft_iterative_factorial(-2));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(13));
	printf("\n------------EX02-----------\n");

	return (0);
}





