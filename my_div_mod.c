void	my_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main()
{
	int	*div2, *mod2, a, b, dresult, mresult;

	a = 10;
	b = 3;
	div2 = &dresult;
	mod2 = &mresult;
	my_div_mod(a, b, div2, mod2);
	printf("%i\n", dresult);
	printf("%i\n", mresult);
}*/
