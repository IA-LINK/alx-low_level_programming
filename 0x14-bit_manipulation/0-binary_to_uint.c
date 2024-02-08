#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - covert from binary to integer.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the number converted.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int j = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		result = (result << 1) | (b[j] - '0');
		j++;
	}
	return (result);
}
