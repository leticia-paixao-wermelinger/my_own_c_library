#include <stdio.h>

int	my_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb >= 1)
		return (nb * my_recursive_factorial(nb - 1));
	return (1);
}
/*
int	main()
{
	int	number;

	number = 9;
	printf("%i\n", my_recursive_factorial(number));
}*/
