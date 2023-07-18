#include "main.h"

/**
 * _isalpha - checkes for alphabetic characters
 * @c: Tthe character to be checked
 *
 * Return: Always 1 for alphabetic characters, or 0 for rest.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
