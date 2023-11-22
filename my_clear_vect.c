
#include "libft.h"

char	**my_clear_vect(char **vect, int size)
{
	while (size >= 0)
	{
		free(vect[size]);
		size--;
	}
	return (NULL);
}
