#include <stdio.h>
#include <unistd.h>

#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int	main ()
{
	printf("---------------------------ex00-------------------------------");
	printf("\n");
	printf("Correct answer: \n");
	printf("0, 3628800, 1, 1, 0");	

	printf("\n");
	printf("\n");

	printf("Your answer: \n");
	int fifteen = 15;
	int ten = 10;
	int zero = 0;
	int one = 1;
	int minus = -5;
	printf("%d, %d, %d, %d, %d", ft_iterative_factorial(fifteen), ft_iterative_factorial(ten), ft_iterative_factorial(zero), ft_iterative_factorial(one), ft_iterative_factorial(minus));
	

	printf("\n");
	printf("\n");

	printf("---------------------------ex01-------------------------------");
	printf("\n");
	printf("Correct answer: \n");
	printf("0, 3628800, 1, 1, 0");	

	printf("\n");
	printf("\n");

	printf("Your answer: \n");

	printf("%d, ", ft_recursive_factorial(fifteen));
	printf("%d, ", ft_recursive_factorial(ten));
	printf("%d, ", ft_recursive_factorial(zero));
	printf("%d, ", ft_recursive_factorial(one));
	printf("%d, ", ft_recursive_factorial(minus));	

	printf("\n");
	printf("\n");


	printf("---------------------------ex02-------------------------------");
	printf("\n");
	printf("Correct answer: \n");
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

	printf("\n");
	printf("\n");

	printf("---------------------------ex03-------------------------------");
	printf("\n");
	printf("Correct answer: \n");
	printf("759375, 0, 1, -78125, 0");

	printf("\n");
	printf("\n");

	printf("Your answer: \n");
	printf("%d, ", ft_recursive_power(fifteen, five));
	printf("%d, ", ft_recursive_power(zero, five));
	printf("%d, ", ft_recursive_power(five, zero));
	printf("%d, ", ft_recursive_power(minus, seven));
	printf("%d", ft_recursive_power(seven, minus));


	printf("\n");
	printf("\n");

	printf("---------------------------ex04-------------------------------");
	printf("\n");
	printf("Correct answer: \n");
	printf("5, -1, 1, 0, 55");

	printf("\n");
	printf("\n");

	printf("Your answer: \n");
	printf("%d, ", ft_fibonacci(five));
	printf("%d, ", ft_fibonacci(minus));
	printf("%d, ", ft_fibonacci(one));
	printf("%d, ", ft_fibonacci(zero));
	printf("%d", ft_fibonacci(ten));

	printf("\n");
	printf("\n");

	printf("---------------------------ex05-------------------------------");
	printf("\n");
	printf("Correct answer: \n");
	printf("0, 0, 0, 0, 4, 0, 1");

	printf("\n");
	printf("\n");
	int minussixteen = -16;
	int sixteen = 16;
	int two = 2;
	printf("Your answer: \n");
	printf("%d, ", ft_sqrt(zero));
	printf("%d, ", ft_sqrt(five));
	printf("%d, ", ft_sqrt(minus));
	printf("%d, ", ft_sqrt(minussixteen));
	printf("%d, ", ft_sqrt(sixteen));
	printf("%d, ", ft_sqrt(two));
	printf("%d", ft_sqrt(one));

	printf("\n");
	printf("\n");
	printf("---------------------------ex06-------------------------------");
	printf("\n");
	printf("Correct answer: \n");
 	printf("0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0");

	printf("\n");
	printf("\n");
	int three = 3;
	int oneninenine = 199;
	int sixtyseven = 67;
	int onefivefour = 154;
	printf("Your answer: \n");
	printf("%d, ", ft_is_prime(zero));
	printf("%d, ", ft_is_prime(one));
	printf("%d, ", ft_is_prime(two));
	printf("%d, ", ft_is_prime(three));
	printf("%d, ", ft_is_prime(oneninenine));
	printf("%d, ", ft_is_prime(sixtyseven));
	printf("%d, ", ft_is_prime(onefivefour));
	printf("%d, ", ft_is_prime(five));
	printf("%d, ", ft_is_prime(seven));
	printf("%d, ", ft_is_prime(minus));
	printf("%d", ft_is_prime(9));


	printf("\n");
	printf("\n");
	printf("---------------------------ex07-------------------------------");
	printf("\n");
	printf("Correct answer: \n");
	printf("2, 2, 2, 3, 199, 67, 157, 5, 7, 2, 11");

	printf("\n");
	printf("\n");

	printf("Your answer: \n");
	printf("%d, ", ft_find_next_prime(zero));
	printf("%d, ", ft_find_next_prime(one));
	printf("%d, ", ft_find_next_prime(two));
	printf("%d, ", ft_find_next_prime(three));
	printf("%d, ", ft_find_next_prime(oneninenine));
	printf("%d, ", ft_find_next_prime(sixtyseven));
	printf("%d, ", ft_find_next_prime(onefivefour));
	printf("%d, ", ft_find_next_prime(five));
	printf("%d, ", ft_find_next_prime(seven));
	printf("%d, ", ft_find_next_prime(minus));
	printf("%d", ft_find_next_prime(9));


	printf("\n");
	printf("\n");

	return (0);
}
