#include <stdio.h>
#include <unistd.h>

#include "ex01/ft_putnbr.c"
#include "ex00/ft_putstr.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	printf("\nEX00---------------------------------\n");
	ft_putnbr(123);
	printf("\nEX00---------------------------------\n");
	ft_putstr("hello, how are you ??? >");
	printf("\nEX00---------------------------------\n");


	/*
	correct answer: \n");
	printf("759375, 0, 1, -78125, 0");

	printf("\n");
	printf("\n");

	printf("Your answer: \n");
	int five = 5;
	int seven = 7;

	printf("%d, ", ft_iterative_power(fifteen, five));
	printf("%d, ", ft_iterative_power(zero, five));
	printf("%d, ", ft_iterative_power(five, zero));
	printf("%d, ", ft_iterative_power(minus, seven));
	printf("%d", ft_iterative_power(seven, minus));
	*/
}
