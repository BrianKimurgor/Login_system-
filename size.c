/*
 * main: entry point
 * display: sizes
 *
 * return: 0
 */
#include <stdio.h>
int main(void)
{
	int i;
	char c;
	double d;


	printf("size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("size of a double is: %lu.\n", (unsigned long)sizeof(d));
	return (0);
}
