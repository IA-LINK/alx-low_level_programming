#include "main.h"

/**
 * print_triangle - function to print # triangle according to parameter
 * @size: parameter pass
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num;
		int col;

		for (num = 0; num < size; num++)
		{
			for (col = num; col < num-1; col++)
			{
				_putchar('');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
