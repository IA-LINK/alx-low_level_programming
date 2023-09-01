#include "unistd.h"

/**
 * _putchar - Putchar allow character c to be insert
 * @c: character to be inserted
 * Return: Always success by 1 and fail -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
