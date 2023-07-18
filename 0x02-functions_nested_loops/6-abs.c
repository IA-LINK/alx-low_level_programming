#include "main.h"

/**
 *_abs -  function that print absolute value of anumber
 * @num: Takes one argument
 * Return: 0 for success
 */
int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
