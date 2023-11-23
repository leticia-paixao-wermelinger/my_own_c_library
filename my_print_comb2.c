#include <unistd.h>

static void	my_own_putstr(int n)
{
	write(1, &n, 1);
}

void	my_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a != b)
			{
				my_own_putstr(a / 10 + '0');
				my_own_putstr(a % 10 + '0');
				write(1, " ", 1);
				my_own_putstr(b / 10 + '0');
				my_own_putstr(b % 10 + '0');
				if (!(a == 98 && b == 99))
					write(1, ", ", 1);
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	my_print_comb2(void);
}*/
