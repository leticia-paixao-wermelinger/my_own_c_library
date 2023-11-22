#include <stdio.h>

void	my_ultimate_div_mod(int *a, int *b)
{
	int	temp_d;
	int	temp_r;

	temp_d = *a / *b;
	temp_r = *a % *b;
	*a = temp_d;
	*b = temp_r;
}
/*
int	main()
{
	int	vala, valb;

	vala = 10;
	valb = 3;
	my_ultimate_div_mod(&vala, &valb);
	printf("%i\n", vala);
	printf("%i\n", valb);
}*/
