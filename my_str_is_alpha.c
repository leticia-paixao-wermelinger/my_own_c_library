#include <stdio.h>

int	my_str_is_alpha(char *str)
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
		if ((n >= 65 && n <= 122) && (!(n >= 91 && n <= 96)))
		{
			print = 1;
		}
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
//	char	 str_alpha[] = "Abracadabra";
//	char	str_all[] = "42 Rio";
//	char	str_middle[] = "Estou na 42 Rio";
	char	str_null[1];
	int	result;

	result = my_str_is_alpha(str_null);
	printf("%d\n", result);
}*/
