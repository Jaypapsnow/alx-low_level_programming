#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @src: the cource of string
 * @dest: the destination
 * @n: the length of int
 *
 * Return: pointer of the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
