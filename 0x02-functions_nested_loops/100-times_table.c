#include "main.h"

/**
 * print_times_table - print the time table of the input
 * starting with 0
 * @n: number to print time table.
 */
void print_times_table(int n)
{
	int num, mulp, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mulp = 1; mulp <= n; mulp++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mulp;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
