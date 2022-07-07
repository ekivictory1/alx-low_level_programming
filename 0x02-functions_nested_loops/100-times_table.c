#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table (0 < n <= 15)
 */
void print_times_table(int n)
{
    int b, c, d;

if (n >= 0 && n <= 15)
	{
		for (b = 0; b <= n; b++)
		{
			for (c = 0; c <= n; c++)
			{
				d = c * a;
				if (c == 0)
				{
					_putchar(d + '0');
				} else if (d < 10 && c != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (d >= 10 && d < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((d / 10) + '0');
					_putchar((d % 10) + '0');
				} else if (d >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((d / 100) + '0');
					_putchar(((d / 10) % 10) + '0');
					_putchar((d % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
