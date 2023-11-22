#include <stdio.h>

char	*my_strlowercase(char *str)
{
	int		i;
	char	n;

	i = 0;
	while (str[i])
	{
		n = str[i];
		if (n >= 65 && n <= 90)
			str[i] = n +32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str1[] = "Don't Panic!";

	printf("%s\n", my_strlowcase(str1));
}*/
