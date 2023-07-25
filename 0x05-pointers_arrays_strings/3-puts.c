#include <stdio.h>
#include "main.h"

/**
 * _puts - Return the length of a string.
 * @s: Check value string.
 *
 * Return: lnt
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		_putchar('\n');
	}
}
