#include "main.h"
#include <stdlib.h>

/**
* array_range - this function creates an array of integers
*
* @min: minimum value
*
* @max: maximum value
*
* Return: Pointer to the new array, or NULL if fail
*
* File_name: 3-array_range.c
*
* Author: Ikwogya Ayika James
*/

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
		return (0);

	for (i = 0; i < max - min + 1; i++)
	{
		*(p + i) = min + i;
	}
	return (p);
}
