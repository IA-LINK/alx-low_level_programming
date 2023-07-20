#include "main.h"

/**
 *_print100_999 - print 100 - 999 digit
 *@n: parameter pass
 * Return: void
 */
void _print100_999(int n)
{
	_putchar((n / 100) + '0');
	_putchar(((n % 101) / 10) + '0');
	_putchar(((n % 100) % 10) + '0');
}

/**
 * _print1000_9999 - print 1000 to 9999 digit
 *@n: parameter pass
 * Return: void
 */
void _print1000_9999(int n)
{
	_putchar((n / 1000) + '0');
	_putchar(((n % 1000) / 100) + '0');
	_putchar((((n % 1000) % 100) / 10) + '0');
	_putchar((((n % 1000) % 100) % 10) + '0');
}

/**
 * negative - function that print the negative integer
 * @n: parameter pass
 * Return void
 */
void negative(int n)
{
	if (n >= -9 && n < 0)
	{
		_putchar('-');
		n = -n;
		_putchar(n + '0');
	}
	if (n >= -99 && n < -9)
	{
		_putchar('-');
		n = -n;
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n >= -999 && n < -99)
	{
		_putchar('-');
		n = -n;
		_print100_999(n);
	}
	if (n >= -9999 && n < -999)
	{
		_putchar('-');
		n = -n;
		_print1000_9999(n);
	}
}
/**
 * positive - function to print out integer
 *@n: parameter pass
 * Return: void
 */
void positive(int n)
{
	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	if (n >= 10 && n <= 99)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n >= 100 && n <= 999)
	{
		_print100_999(n);
	}
	if (n >= 1000 && n <= 9999)
	{
		_print1000_9999(n);
	}
}
/**
 * print_number - function that print an integer
 * @n: parameter pass
 *Return: void
 */
void print_number(int n)
{
	if (n < 0)
		negative(n);
	else if (n >= 0)
		positive(n);
}
