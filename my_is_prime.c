#include <stdio.h>

int	my_is_prime(int nb)
{
	long int	x;

	x = 1;
	if (nb <= 1 || nb == -2147483648)
		return (0);
	if (nb == 2 || nb == 2147483647)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (x <= nb)
	{
		if (nb % x == 0 && x != nb && x != 1)
		{
			return (0);
		}
		x++;
	}
	return (1);
}
/*
#include <limits.h>

int	main()
{
	printf("%i\n", my_is_prime(2));
	printf("%i\n", my_is_prime(1));
	printf("%i\n", my_is_prime(7));
	printf("%i\n", my_is_prime(-7));
	printf("%i\n", my_is_prime(997));
	printf("%i\n", my_is_prime(INT_MIN));
	printf("%i\n", my_is_prime(2147483646));
}*/
