int	my_sqrt(int nb)
{
	long int	x;

	x = 0;
	while (x * x <= nb)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
/*
#include <limits.h>
#include <stdio.h>

int	main()
{
    printf("%i\n", my_sqrt(325));
	printf("%i\n", my_sqrt(16));
	printf("%i\n", my_sqrt(81));
	printf("%i\n", my_sqrt(1));
	printf("%i\n", my_sqrt(INT_MAX));
	printf("%i\n", my_sqrt(INT_MIN));
	return (0);
}*/
