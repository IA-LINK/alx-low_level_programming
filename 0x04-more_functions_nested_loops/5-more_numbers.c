#include "main.h"

/**
 * more_numbers - function to print 0 - 14 (10 times)
 *
 * Return: void
 */
void more_numbers(void)
{
	int num;
	int times;

	for (times = 0; times <= 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else
			{
				_putchar(num + '0');
			}
		}
		_putchar('\n');
	}
}
