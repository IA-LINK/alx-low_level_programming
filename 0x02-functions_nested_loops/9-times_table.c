#include "main.h"

/**
 * times_table - function to print times table
 *
 * Return: void
 */
void times_table(void)
{
	int start;
	int end;
	int mult;

	for (start = 0; start <= 9; start++)
	{
		for (end = 0; end <= 9; end++)
		{
			mult = start * end;
			if (mult < 10)
			{
				_putchar(mult + '0');
				_putchar(',');
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
				if (end != 9)
					_putchar(',');
			}
			}
		_putchar('\n');
	}
}
