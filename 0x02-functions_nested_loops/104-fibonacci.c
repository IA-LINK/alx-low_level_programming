#include "stdio.h"

#include "stdlib.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int a;
	long int b;
	long int c;
	int count;

	a = 1;
	b = 2;
	count = 1;
	while (count <= 100)
	{
		printf("%ld", a);
		c = a + b;
		a = b;
		b = c;
		count++;
		if (count <= 100)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
