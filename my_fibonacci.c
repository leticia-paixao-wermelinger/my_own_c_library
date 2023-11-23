int	my_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return ((my_fibonacci(index - 1)) + (my_fibonacci(index - 2)));
}
/*
#include <stdio.h>

int	main()
{
	printf("%i\n", my_iterative_power(5, 5));
	printf("%i\n", my_iterative_power(0, 5));
	printf("%i\n", my_iterative_power(0, 0));
	printf("%i\n", my_iterative_power(2, 2));
	printf("%i\n", my_iterative_power(5, -5));
	printf("%i\n", my_iterative_power(5, 0));
}*/
