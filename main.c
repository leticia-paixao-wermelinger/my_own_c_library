#include <stdio.h>
#include "libft.h"

int	main()
{
	int	j = 0;
	int i = 0;
	char *str = "    Leticia    Paixao  Wermelinger ";
//	char *str = "(null)";
	char sep = ' ';
	char	**vect;

	
	vect = my_split(str, sep);
	while (vect[i])
		i++;
	while (j <= i)
	{
		printf("|%s|\n", vect[j]);
		j++;
	}
//	printf("\n");
	j = 0;
	while (vect[j])
	{
		free(vect[j]);
		j++;
	}
	free(vect);
	return (0);
}
