#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
* _realloc - function that reallocates a memory block using malloc and free
*
* @ptr: pointer to the memory previously allocated
*
* @old_size: size, in bytes, of the allocated space of ptr
*
* @new_size: new size, in bytes, of the new memory block
*
* Return: ptr
*
* File_name: 100-realloc.c
*
* Author: Ikwogya Ayika James
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
