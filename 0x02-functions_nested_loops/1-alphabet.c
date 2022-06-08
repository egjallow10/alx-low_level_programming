#include "main.h"

/**
 * main - printing alphabets
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar(10);
	return (0);
}
