/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 13:21:28 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/06 14:12:08 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "./ex00/ft_putstr.c"
#include "./ex01/ft_putnbr.c"
#include "./ex02/ft_atoi.c"
#include "./ex03/ft_strcpy.c"
#include "./ex04/ft_strncpy.c"
#include "./ex05/ft_strstr.c"
#include "./ex06/ft_strcmp.c"
#include "./ex07/ft_strncmp.c"
#include "./ex08/ft_strupcase.c"
#include "./ex09/ft_strlowcase.c"
#include "./ex10/ft_strcapitalize.c"
#include "./ex11/ft_str_is_alpha.c"
#include "./ex12/ft_str_is_numeric.c"
#include "./ex12/ft_str_is_numeric.c"
#include "./ex16/ft_strcat.c"
#include "./ex18/ft_strlcat.c"
#include <stdlib.h>
#include <string.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char hello[14] = "Bonjour Monde";
	ft_putchar('\n');
	ft_putchar('\n');

	printf("#--Ex00: ft_putstr--#\n");
	ft_putstr(hello);
	ft_putchar('\n');
	ft_putchar('\n');

	printf("#--Ex01: ft_putstr--#\n");
	int a;
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	for ( a = -100; a < 102; a++)
	{
		ft_putnbr(a);
		ft_putchar(' ');
	}
	ft_putchar('\n');
	ft_putchar('\n');

	printf("#--Ex02: ft_atoi--#\n");
	ft_putchar('\n');
	printf("Atoi : %d | ft_atoi ; %d\n", atoi("254"), ft_atoi("254"));
	printf("Atoi : %d | ft_atoi ; %d\n", atoi("      -45"), ft_atoi("       -45"));
	printf("Atoi : %d | ft_atoi ; %d\n", atoi("joecw58"), ft_atoi("joecw58"));
	printf("Atoi : %d | ft_atoi ; %d\n", atoi(" --9494"), ft_atoi(" --9494"));
	printf("Atoi : %d | ft_atoi ; %d\n", atoi("0"), ft_atoi("0"));
	printf("Atoi : %d | ft_atoi ; %d\n", atoi("+42"), ft_atoi("+42"));
	printf("Atoi : %d | ft_atoi ; %d\n", atoi("-2147483648"), ft_atoi("-2147483648"));
	printf("atoi %d | ft_atoi %d\n", atoi(" aa 23 aa"), ft_atoi(" aa 23 aa"));
	printf("atoi %d | ft_atoi %d\n", atoi(" -158 -23"), ft_atoi(" -158 -23"));
	printf("atoi %d | ft_atoi %d\n", atoi("abc 22 abc"), ft_atoi("abc 22 abc"));
	printf("atoi %d | ft_atoi %d\n", atoi("   -22"), ft_atoi("   -22"));
	printf("atoi %d | ft_atoi %d\n", atoi("abc15"), ft_atoi("abc15"));
	printf("atoi %d | ft_atoi %d\n", atoi("-15 abc"), ft_atoi("-15 abc"));
	printf("atoi %d | ft_atoi %d\n", atoi("12211t11"), ft_atoi("12211t11"));
	printf("atoi %d | ft_atoi %d\n", atoi("--223"), ft_atoi("--223"));
	ft_putchar('\n');


	printf("#--Ex03: ft_strcpy--#\n");
	char r[20] = "Bonjour";
	char s[20] = "Hello";
	ft_strcpy(s, r);
	printf("%s, %s\n\n", s, r);

	printf("#--Ex04: ft_strncpy--#\n");
	char l[20] = "Hello";
	char d[20] = "Bonjour";
	ft_strncpy(d, l, 20);
	printf("%s, %s\n\n", d, l);


	printf("#--Ex05: ft_strstr--#\n");
	char straw[60] = "Trouver une aiguille dans une botte de foin";
	char needle[10] = "aiguille";
	char fake[10] = "needle";
	char *ret;

	ret = ft_strstr(straw, fake);
	printf("trouver une %s\n", ret);
	ret = ft_strstr(straw, needle);
	printf("trouver une %s\n\n\n", ret);

	printf("#--Ex06: ft_strcmp--#\n");
	char name[10] = "Cocp";
	char last[5] = "Coco";

	printf("differences %d\n", strcmp(name, last));
	printf("differences %d\n\n\n", ft_strcmp(name, last));

	printf("#--Ex07--#\n");

	printf("differences %d\n", strncmp(name, last, 5));
	printf("differences %d\n\n\n", ft_strncmp(name, last, 5));


	printf("#--Ex08: ft_strupcase--#\n");

	printf("my last name upcased: %s\n", ft_strupcase(last));
	char alphabet[26]= "abcdefghijklmnopqrstuvwxyz";
	printf("Alphabet:%s\n", ft_strupcase(alphabet));
	char allo[89]= "Non mais allo quoi !?";
	printf("Allo test: %s\n\n\n", ft_strupcase(allo));

	printf("#--Ex09: ft_strlowcase--#\n");

	printf("my last name upcased: %s\n", ft_strlowcase(last));
	char beta[26]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("Alphabet:%s\n", ft_strlowcase(beta));
	char allokoi[89]= "NON MAIS ALLO QUOI !?";
	printf("Allo test: %s\n\n\n", ft_strlowcase(allokoi));

	printf("#--Ex10: ft_strcapitalize--#\n");
	char blabla = 'S';
	char salut[90] = "salut, coMMent tu vAS ? 42MOts ?quarante-deux; Cinquante+et+un. [coU }cu ;ou";
	printf("%s\n\n\n", ft_strcapitalize(salut));

	printf("#--Ex11: ft_str_is_alpha--#\n");
	printf("Zero: %d\n", ft_str_is_alpha(salut));
	printf("One : %d\n",ft_str_is_alpha(""));
	printf("One : %d chaine vide\n\n\n",ft_str_is_alpha(last));

	printf("#--Ex12: ft_str_is_numeric--#\n");
	printf("Zero: %d\n", ft_str_is_numeric(salut));
	printf("One : %d\n",ft_str_is_numeric("7895"));
	printf("One : %d\n\n\n",ft_str_is_numeric(""));

	printf("#--Ex16: strcat--#\n");
	char cou[30] = "coucou";
	char c[20] = " cestmoi";
	ft_strcat(cou, c);
	printf("%s\n\n\n", cou);

	printf("#--Ex01: ft_putstr--#\n");
	printf("#--Ex01: ft_putstr--#\n");

	return (0);
}
