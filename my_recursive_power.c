#include <stdio.h>

static void	aux(int n, int p, int *r)
{
	*r = *r * n;
	if (p > 0)
		aux(n, (p -1), r);
}

int	my_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	aux(nb, power - 1, &result);
	return (result);
}
/*
int	main()
{
	printf("%i\n", my_recursive_power(2, 4));
	printf("%i\n", my_recursive_power(0, 5));
        printf("%i\n", my_recursive_power(0, 0));
        printf("%i\n", my_recursive_power(2, 2));
        printf("%i\n", my_recursive_power(5, -5));
        printf("%i\n", my_recursive_power(5, 0));
}*/
