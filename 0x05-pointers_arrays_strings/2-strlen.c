#include <stdio.h>
#include "main.h"

/**
 * _strlen - Returns the length of a dtring.
 * @s: Pointer to the input string.
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i, lnt;

	lnt = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		lnt++;
	}
	return (lnt);
}

