#include <unistd.h>

void	my_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}

/*
int	main (void)
{
	my_print_numbers();
	return 0;
}*/
