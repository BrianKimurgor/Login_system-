/*
 * Main: input
 * Output: age
 *
 * Return 0
 */
#include <stdio.h>
int main(void)
{
	int age;

	printf("Enter your age!");
	scanf("%d", &age);
	if (age < 100)
	{
		printf("you are still young");
	}
	else if (age == 100)
	{
		printf("you are old");
	}
	else if (age > 100)
	{
		printf("you are so old !");
	}
	else
		printf("null");
}
