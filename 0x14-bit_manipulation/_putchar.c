#include "unistd.h"

/**
 * _putchar - Putchar to allow character c to be inserted
 * @c: character to be inserted
 * Return: Always success on 1 and fail on -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
