#include "main.h"
/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int b = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		for (b = 0;   dest[b] != '\0';  b++)
		{
		}
		dest[b] = src[i];
		b++;

	}

	dest[b] = '\0';

	return (dest);
}
