void	my_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main()
{
	int	n1;
	int	n2;

	
	n1 = 10;
	printf("Valor inicial de n1: %i\n", n1);
	n2 = 5;
	printf("Valor inicial de n2: %i\n", n2);
	my_swap(&n1, &n2);
	printf("Valor final de n1: %i\n", n1);
	printf("Valor final de n2 %i\n", n2);
}*/
