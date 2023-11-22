
#include <stdlib.h>

int	my_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	i = 0;
	result = (int *)malloc((max - min) * sizeof(int));
	if (!result)
	{
		range = NULL;
		return (-1);
	}
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	while (min < max)
	{
		result[i] = min;
		min ++;
		i++;
	}
	*range = result;
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	int	*arr;
	int	var;

	arr = &var;
	int	**arr2 = &arr;
	int	min2 = -4;
	int	max2 = 4;
	int	i;
	int	res;

	i = 0;
	res = my_ultimate_range(arr2, min2, max2);
	while (i < (max2 - min2))
	{
		printf("%i ", arr[i]);
		i++;
	}
	printf("\n");
	printf("%i \n", res);
	free(arr);
	return (0);
}*/
