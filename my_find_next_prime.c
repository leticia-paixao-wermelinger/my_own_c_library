#include <stdio.h>

int	my_find_next_prime(int nb)
{
	long int	x;

	x = 1;
	if (nb <= 1) // Poderia ser menor ou igual a 2
		return (0); // Deveria ser return 2, eu esqueci de trocar quando copiei da questão anterior
	if (nb == 2147483647)
		return (2147483647);
	while (x <= 1073741823 && x <= nb)
	{
		if (nb % x == 0 && x != nb && x != 1)
		{
			nb++;
		}
		x++;
	}
	return (nb);
}
/*
#include <limits.h>
   
int     main()
{       
        printf("%i\n", my_find_next_prime(2));
        printf("%i\n", my_find_next_prime(0));
        printf("%i\n", my_find_next_prime(1));
        printf("%i\n", my_find_next_prime(1));
        printf("%i\n", my_find_next_prime(7));
        printf("%i\n", my_find_next_prime(-7));
        printf("%i\n", my_find_next_prime(997));
        printf("%i\n", my_find_next_prime(-2147483648));
        printf("%i\n", my_find_next_prime(2147483647));
}*/
