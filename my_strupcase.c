#include <stdio.h>

char	*my_strupcase(char *str)
{
	int		i;
	char	n;

	i = 0;
	while (str[i])
	{
		n = str[i];
		if (n >= 97 && n <= 122)
			str[i] = n -32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str1[] = "Don't Panic!";
	char	*returned;

	returned = my_strupcase(str1);
	printf("%s\n", returned);
}*/
