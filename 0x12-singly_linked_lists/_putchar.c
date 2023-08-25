#include <unistd.h>

/**
 * _putchar - The character to write
 * @c: The character to be write
 * Return: return 1 on success & -1 on failure
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
