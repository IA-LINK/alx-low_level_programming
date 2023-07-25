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
	int len = 0;

	if (s != NULL)
	{
		while (*s != '\0')
		{
			len++;
			s++;
		}
	}
}

