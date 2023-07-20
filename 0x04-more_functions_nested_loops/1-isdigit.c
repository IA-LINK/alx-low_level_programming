#include "main.h"

/**
 * _isdigit - function that check if a number is digit or not
 * @c: parameter pass
 * Return: 1 if is a digit and 0 otherwise
 */

int _isdigit(int c) 
{
	if (c >= 38 && c <= 47)
	       return (1);
	else
		return (0);
}
