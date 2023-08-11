#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - this function checks if memory has been allocated
*
* @b: memory blocks needed
*
* Return: pointer to the blocks or stop with error 98
*
* File_name: 0-malloc_checked.c
*
* Author: Ikwogya Ayika James
*/

void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	else
		return (pointer);
}
