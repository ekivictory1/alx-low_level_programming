#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int a, rep, b;

	if (n <= 0 && n >= 15)
	{
		for (b = 0; b <= n; b++)
		{
			for (a = 0; a <= n; a++)
			{
				rep = a * b;
				if (b == 0)
				{
					_putchar(rep + '0');
				} else if (rep < 10 && a != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(rep + '0');
				} else if (rep < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((rep / 10) + '0');
					_putchar((rep % 10) + '0');
				} else if (rep >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((rep / 100) + '0');
					_putchar(((rep / 10) % 10) + '0');
					_putchar((rep % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
