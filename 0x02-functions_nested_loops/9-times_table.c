#include "main.h"

/**
 * times_table - print the 9 times table starting from 0.
 */
void times_table(void)
{
	int num, mulp, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mulp = 1; mulp <= 9; mulp++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mulp;

			if  (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
