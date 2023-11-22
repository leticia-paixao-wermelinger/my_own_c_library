#include <stdio.h>

char	*my_strcapitalize(char *str)
{
	int		i;
	char	n;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		n = str[i];
		if ((i == 0 && n >= 97 && n <= 122)
			|| ((str[i - 1] == ' ' || str[i - 1] == '-'
					|| str[i - 1] == '+') && (n >= 97 && n <= 122)))
			str[i] = n - 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	string[] = "oi, tudo bem? 42Palavras quarenta-e-duas; conquenta+e+um";

	my_strcapitalize(string);
	printf("%s\n", string);

	char *nome = "rodrigo";
	printf("%c", nome[-1]);
}*/
