#include <stdio.h>
#include <stdlib.h>

/**
 * fizz_buzz - program to print 1 - 100
 * where number divisible by 3 is fizz
 * where number divisible by 5 is buzz
 * where num divisible by 5 and 3 is fizzbuzz
 * number otherwise
 * Return: void
 */
void fizz_buzz(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", num);
	}
	printf("\n");
}
/**
 * main - Entry point
 *
 * Return: 0 always (success)
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
