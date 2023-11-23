int	my_str_is_printable(char *str)
{
	int		i;
	int		print;
	char	n;

	i = 0;
	if (str[i] == '\0')
		print = 1;
	while (str[i])
	{
		n = str[i];
		if (n >= 32 && n <= 126)
			print = 1;
		else
		{
			print = 0;
			break ;
		}
		i++;
	}
	return (print);
}
/*
#include <stdio.h>

int	main()
{
	char    str[] = "Rio de \n Janeiro";
	int     returned;
	
	returned = my_str_is_printable(str);
	printf("%i\n", returned);
}*/
