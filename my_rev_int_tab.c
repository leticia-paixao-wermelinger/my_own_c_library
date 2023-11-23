void	my_rev_int_tab(int *tab, int size)
{
	int	temp[size];
	int	i;
	int	full;

	i = 0;
	full = size;
	while (size > 0)
	{
		size--;
		temp[i] = tab[size];
		i++;
	}
	i = 0;
	while (i <= full)
	{
		tab[i] = temp[i];
		i++;
	}
}
/*
#include <stdio.h>

int	main()
{
	int	arr[4] = {4, 2, 0, 1};
	int	i;

	i = 4;
	my_rev_int_tab(arr, i);
	i = 0;
	while (i < 4)
	{
		printf("%i", arr[i]);
		i++;
	}
}*/
