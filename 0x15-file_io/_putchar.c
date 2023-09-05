#include <unistd.h>

/**
 * _putchar - putchar to input character to be write.
 * @c: character to be write
 * Return: return success on 1 and -1 on fail.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
