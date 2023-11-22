#include <unistd.h>

void	my_print_reverse_alphabet(void)
{
	char	alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}

/*
int	main(void)
{
	my_print_reverse_alphabet();
	return (0);
}*/
