#include "main.h"

/**
 * print_line - function to print _ according to parameter
 * @n: parameter pass
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num;

		for (num = 0; num <= n; num++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
