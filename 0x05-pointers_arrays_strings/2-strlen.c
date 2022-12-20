#include "main.h"

/**
 * _strlen - returns length of a string.
 * @s: string to check
 * Description: returns the length of the string provided
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;

	return (a);
}
