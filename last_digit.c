/*
 * main - determines the last digit
 *
 * return 0;
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, j);
	else if(n == 0)
		printf("Last digit of %d is %d andis 0\n", n, j);
	else if(n < 6)
		printf("Last digit of %d is %d and is lessthan 6 and not 0\n", n, j);
	return (0);
}
