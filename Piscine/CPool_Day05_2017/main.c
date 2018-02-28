#include <stdio.h>

int my_put_nbr(int);
int my_compute_factorial_it(int);

int main(void)
{
	int d = my_compute_factorial_it(5);
	my_put_nbr(d);
	printf("\n%d\n", d);
	return(0);
}
