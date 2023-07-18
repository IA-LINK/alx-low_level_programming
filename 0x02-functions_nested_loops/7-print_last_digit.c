#include "main.h"

/**
 * print_last_digit - function to print last digit of number
 * @num: argument pass
 * Return: 0 for success
 */
int print_last_digit(int num)
{
	int last;

	last = num % 10;
	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
