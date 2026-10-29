#include <stdio.h>

void peeka(int ***nbr)
{
	***nbr = 67;
}

int main(void)
{
	int p;
	int *pee = &p;
	int **ka = &pee;
	int ***boo = &ka;
	
	peeka(boo);
	printf("%d", p);
	return (0);
}
