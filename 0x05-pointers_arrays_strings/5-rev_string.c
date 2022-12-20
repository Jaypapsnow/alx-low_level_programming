#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char to check
 *
 * Description: this will reversea string
 * Return: 0 is a success
 */
void rev_string(char *s)
{
	int a = 0, b, c;
	char t;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		t = s[b];
		s[b] = s[c];
		s[c] = t;
	}
