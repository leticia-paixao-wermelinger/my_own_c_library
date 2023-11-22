#include <stdio.h>

int	my_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int	main()
{
	printf("%i\n", my_iterative_power(5, 5));
	printf("%i\n", my_iterative_power(0, 5));
	printf("%i\n", my_iterative_power(0, 0));
	printf("%i\n", my_iterative_power(2, 2));
	printf("%i\n", my_iterative_power(5, -5));
	printf("%i\n", my_iterative_power(5, 0));
}*/
