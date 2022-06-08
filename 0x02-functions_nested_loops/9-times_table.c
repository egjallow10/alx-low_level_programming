#include "main.h"
#include <ctype.h>
/**
 * times_table - prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int row, col, s;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			s = row * col;
			if (col == 0)
			{
				_putchar(s + '0');
			}
			if (s <= 9 && col != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(s + '0');
			} else if (s >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((s / 10) + '0');
				_putchar((s % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

