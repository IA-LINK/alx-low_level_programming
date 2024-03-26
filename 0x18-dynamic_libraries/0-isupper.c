#include "main.h"

/**
 * _isupper - function that check for capital letter
 * @c: parameter c pass
 * Return: 1 if is a capital and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
