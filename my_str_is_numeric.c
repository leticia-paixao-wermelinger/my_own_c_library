int	my_str_is_numeric(char *str)
{
	int		count;
	int		print;
	char	n;

	count = 0;
	if (str[count] == '\0')
		print = 1;
	while (str[count])
	{
		n = str[count];
		if (n >= 48 && n <= 57)
			print = 1;
		else
		{
			print = 0;
			break ;
		}
		count++;
	}
	return (print);
}
/*
#include <stdio.h>

int	main()
{
	char	str_numbers[] = "42 Rio";
	int	returned;

	returned = my_str_is_numeric(str_numbers);
	printf("%i\n", returned);
}*/
