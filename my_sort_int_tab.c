void	my_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = swap;
			i = 0;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main()
{
	int	arr[10] = {4, 1, 6, 2, 7, 3, 5, 9, 8, 10};
	int	i;

	i = 10;
	my_sort_int_tab(arr, i);
	i = 0;
	while (i < 10)
	{
		printf("%i", arr[i]);
		i++;
	}

}*/
