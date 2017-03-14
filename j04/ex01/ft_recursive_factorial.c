
#include	<stdio.h>
#include	<time.h>

int     ft_recursive_factorial(int nb)
{
	int result;
	int i;

	i = 0;
	result = 1;
	if (i <  nb)
	{ 	
		ft_recursive_factorial(i++);
	}
	return result;
}
















void	 return_values(int nb)
{
	int i;

	i = 0;
	while ( i++ < nb)
		printf("#%d: %d\n", i,ft_recursive_factorial(i));
}

int		main(void)
{
	return_values(3);
	return (0);
}

