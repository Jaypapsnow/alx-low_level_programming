#include "main.h"

/**
 * _memset - fills the first @n bytesof the memory with of the
 * memory area pointed by @s with constant byte @b
 *
 * @n: bytes of the memory area pointed by @s
 *
 * @s: with the constant byte @b
 *
 * @b: constant byte
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
