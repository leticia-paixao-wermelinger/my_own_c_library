int	my_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
/*
#include <stdio.h>

int	main()
{
	int	number;
	int	result;

	number = 9;
	result = my_iterative_factorial(number);
	printf("%i\n", result);
}*/
