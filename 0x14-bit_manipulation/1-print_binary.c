#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 *
 * Description: This function takes an unsigned long integer @n and prints
 * binary representation without using arrays or the % and / operators.
 * It iterates through the bits of the input number and prints '0' or '1' for
 * each bit.
 */
void print_binary(unsigned long int n)
{
	int j;
	int bits = sizeof(unsigned long int) * 8;

	for (j = bits - 1; j >= 0; j--)
	{
		unsigned long int mask = 1UL << j;

		putchar((n & mask) ? '1' : '0');
	}
	putchar('\n');
}
