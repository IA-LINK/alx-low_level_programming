#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @num: The number to be converted and printed.
 *
 * Description: This function takes an unsigned long integer @num and prints
 * binary representation without using arrays or the % and / operators.
 * It iterates through the bits of the input number and prints '0' or '1' for
 * each bit.
 */
void print_binary(unsigned long int num)
{
	if (num > 1)
	{
		print_binary(num >> 1);
	}
	_putchar((num & 1) ? '1' : '0');
}
