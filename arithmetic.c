/*
 * Main: entry point
 * Print: arithmetic operations
 *
 * Return 0;
 */
#include <stdio.h>
int main(void)
{
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	printf("value of c in %d\n", c);

	c = a - b;
	printf("value of c is %d\n", c);

	c = a * b;
	printf("value of c is %d\n", c);

	c = a / b;
	printf("value of c is %d\n", c);

	c = a % b;
	printf("value of c is %d\n", c);

	c = a++;
	printf("value of c is %d\n", c);

	c = a--;
	printf("value of c is %d\n", c);

	return (0);
}
