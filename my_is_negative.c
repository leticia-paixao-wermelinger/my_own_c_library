#include	<unistd.h>

void	my_is_negative(int n)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
		write(1, &neg, 1);
	else
		write(1, &pos, 1);
}

/*
int main(){
	my_is_negative(-3);
	return 0;
}
*/
