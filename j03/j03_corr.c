#include <stdio.h>
#include <unistd.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	printf("---------------------ex00-----------------------\n");
	int n  = 0;
	ft_ft(&n);
	printf("%d < You | Answer > 42", n);
	printf("\n---------------------ex01-----------------------\n");	
	int nb = 10;
	int *n1 = &nb;
	int **n2 = &n1;
	int ***n3 = &n2;
	int ****n4 = &n3;
	int *****n5 = &n4;
	int ******n6 = &n5;
	int *******n7 = &n6;
	int ********n8 = &n7;
	int *********n9 = &n8;	
	ft_ultimate_ft(n9);
	printf("%d < You | Answer > 42", nb);
	printf("\n---------------------ex02-----------------------\n");
	int a = 42;
	int b = 133;
	ft_swap(&a, &b);
	printf("a: %d, b: %d < You | Answer > a: 133, b: 42", a, b);
	printf("\n---------------------ex03-----------------------\n");
	//int ex2a = 5;
	//int ex2b = 2;
	//int ab = 0;
	//int ba = 0;
	//int *div = &ab;
	//int *mod = &ba;
	int div = 0;
	int mod = 0;	
	ft_div_mod(5, 2, &div, &mod);
	printf("div: %d, mod: %d < You | Answer > div: 2, mod: 1", div, mod);
	printf("\n---------------------ex04-----------------------\n");
	int pointeur1 = -2147483648;
	int pointeur2 = 2;
	ft_ultimate_div_mod(&pointeur1, &pointeur2);	
	printf("a: %d, b: %d <------You | Answer -----> a: -1073741824, b: 0", pointeur1, pointeur2);
	int pointeur3 = -2147483647;
	int pointeur4 = 2147483648;
	ft_ultimate_div_mod(&pointeur3, &pointeur4);	
	printf("\na: %d, b: %d <------You | Answer -----> a: 0, b: -2147483647", pointeur3, pointeur4);
	printf("\n---------------------ex05-----------------------\n");
	char tab1[] = "Piscine42";
	char tab2[] = "$$$ &*)(()_ this is what you get";
	char tab[] = "";
	printf("R1: %s, R2: %s, R3: %s <-------You|\nR1: Piscine42, R2: $$$ &*)(()_ this is what you get, R3: ", tab1, tab2, tab);;
	printf("\n---------------------ex06-----------------------\n");	
	char tab3[] = "Why not print out this 12345 ^&$*()";
	char tab4[] = "";
	char tab5[] = "1";
	printf("R1: %d, R2: %d, R3: %d <------You | Answer -----> R1: 35, R2: 0, R3: 1", ft_strlen(tab3), ft_strlen(tab4), ft_strlen(tab5));}

