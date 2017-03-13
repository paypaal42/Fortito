#include <stdio.h>
#include <unistd.h>
#include "ex00/ft_print_alphabet.c"
#include "ex01/ft_print_reverse_alphabet.c"
#include "ex02/ft_print_numbers.c"
#include "ex03/ft_is_negative.c"
#include "ex04/ft_print_comb.c"
#include "ex05/ft_print_comb2.c"
#include "ex06/ft_putnbr.c"

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	printf("---------------------ex00-----------------------\n");
	printf("abcdefghijklmnopqrstuvwxyz\n");
	ft_print_alphabet();
	putchar('\n');
	printf("---------------------ex01-----------------------\n");
	printf("zyxwvutsrqponmlkjihgfedcba\n");
	ft_print_reverse_alphabet();
	putchar('\n');
	printf("---------------------ex02-----------------------\n");
	printf("0123456789\n");
	ft_print_numbers();
	putchar('\n');
	printf("---------------------ex03-----------------------\n");
	ft_is_negative(2147483647);
	ft_is_negative(10);
	ft_is_negative(0);
	ft_is_negative(-10);
	ft_is_negative(-9239230);
	ft_is_negative(-2147483648);
	putchar('\n');
	printf("PPPNNN\n");
	printf("--------------------ex04-----------------------\n");
	printf("---------012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789-------\n");
	ft_putchar('\n');
	ft_print_comb();
	putchar('\n');
	printf("---------------------ex05-----------------------\n");
	printf("Answer from ex : -------------->");
	printf("00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99\n");
	printf(": -------------->");
	putchar('\n');
	ft_print_comb2();
	putchar('\n');
	printf("---------------------ex06-----------------------\n");
	printf("2147483647\n");
	printf("42\n");
	printf("0\n");
	printf("-42\n");
	printf("-2147483648\n");
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	printf("---------------------ex07-----------------------\n");
	putchar('\n');
}
