#include <unistd.h>

void	my_print_alphabet(void)
{
	char	alphabet;

	alphabet = 97;
	while (alphabet <= 122)
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}

/*
int	main(void)
{
	my_print_alphabet();
	return (0);
}
*/
