#include <stdio.h>

int	my_str_is_uppercase(char *str)
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
		if (n >= 'A' && n <= 'Z')
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
int	main()
{
	char    str_numbers[] = "Rio de Janeiro";
	int     returned;
	
	returned = my_str_is_uppercase(str_numbers);
	printf("%i\n", returned);
}*/