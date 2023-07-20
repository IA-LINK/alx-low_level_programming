#include "main.h"

/**
 * print_diagonal - function to print \ diagonal according to parameter
 * @n: parameter pass
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num;
		int col;

		for (num = 0; num < n; num++)
		{
			for (col = 0; col < num; col++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
