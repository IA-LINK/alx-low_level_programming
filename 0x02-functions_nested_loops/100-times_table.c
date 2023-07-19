#include "main.h"

/**
 * print_times_table - function to print times table of n
 * @n: argument n
 * Return: void
 */
void print_times_table(int n)
{
	int start;
	int mult;
	int inner;

	if (n > 0 && n < 15)
	{
		for (start = 0; start <= n; start++)
                {
                        for (inner = 0; inner <= n; inner++)
                        {
                                mult = start * inner;
                                if (mult < 10)
                                {
                                        _putchar(mult + '0');
                                }
				else if (mult > 99)
				{
					_putchar((mult / 100) + '0');
					_putchar(((mult / 10) % 10) + '0');
					_putchar((mult % 10) + '0');
				}
                                else
                                {
                                        _putchar((mult / 10) + '0');
                                        _putchar((mult % 10) + '0');
                                }
                                if (start <= n && inner < n )
                                {
                                        _putchar(',');
					if (mult >=0 && mult <= 9)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (mult >= 10 && mult <= 99)
					{
						_putchar(' ');
					}
                                }
                        }
                        _putchar('\n');
		}
	}
}
