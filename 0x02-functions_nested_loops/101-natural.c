#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int sum;
	int num;

	sum = 0;
	num = 1;
	for (num = 1; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
