#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int a = 0, rep, c;

	if (n < 0 || n > 15)
	return;
	while (a <= n)
{
	for (c = 0; c <= n; c++)
	{
		rep = a * c;
		if (c == 0)
			_putchar('0' + rep);
		else if (rep < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + rep);
		}
		else if (rep < 100)
		{
			_putchar(' ');
			_putchar('0' + rep / 10);
			_putchar('0' + rep % 10);
		}
		else
		{
			_putchar('0' + rep / 100);
			_putchar('0' + (rep - 100) / 10);
			_putchar('0' + rep % 10);
		}
		if (c < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	c++;
}
}
