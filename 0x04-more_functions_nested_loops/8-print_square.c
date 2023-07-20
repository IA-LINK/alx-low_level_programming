#include "main.h"

/**
 * print_square - function to print #  according to parameter square
 * @size: parameter pass
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int inner;
		int outer;

		for (outer = 0; outer < size; outer++)
		{
			for (inner = 0;  inner < size; inner++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
