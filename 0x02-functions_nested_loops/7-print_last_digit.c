#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @n: number which will providelast digit.
 * Return: value oflast digit.
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
		d = d * -1;
	_putchar(d + '0');
	return (d);
}
