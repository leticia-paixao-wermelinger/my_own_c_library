#include <unistd.h>

char	*my_rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	
	while (i > 0)
	{
		write(1, &str[i-1], 1);
		i--;
	}
	return (str);
}
/*
int	main()
{
	my_rev_print("Ponies are awesome");
	write(1, "\n", 1);
}*/
