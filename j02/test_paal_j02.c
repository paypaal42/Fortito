#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);

#include "ex00/ft_print_alphabet.c"
#include "ex01/ft_print_reverse_alphabet.c"
#include "ex02/ft_print_numbers.c"
#include "ex03/ft_is_negative.c"
#include "ex04/ft_print_comb.c"
//#include "ex05/ex05/ft_print_comb2.c"
//#include "ex04/ft_putnbr.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	printf("---------------------ex00-----------------------\n");
	printf("abcdefghijklmnopqrstuvwxyz\n");
	//printf("Result  : %s\n", ft_print_alphabet(void));
	//printf("%i\n", ft_strlen("coucou\0"));
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
	printf("012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789\n");
	ft_putchar('\n');
	ft_putchar('\n');
	ft_print_comb();
	putchar('\n');
	/*
	printf("---------------------ex05-----------------------\n");
	ft_print_comb2();
	putchar('\n');
	printf("---------------------ex06-----------------------\n");
	ft_putnbr(123456);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	putchar('\n');	
	ft_putnbr(123456);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	printf("---------------------ex07-----------------------\n");

	putchar('\n');

*/

}



