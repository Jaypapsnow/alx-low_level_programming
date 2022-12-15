#include <stdio.h>

/**
 * main - prints the first 50 fibonnaci numbers starting with 1 and 2,
 * followed by a comma.
 *
 * Return: 0
 */
int main(void)
{
	int point;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (point = 0; point < 50; point++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (point == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
