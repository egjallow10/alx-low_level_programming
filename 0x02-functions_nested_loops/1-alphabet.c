#include "main.h"

/**
 *print_alphabet - print alphabets
 *
 *Description: print_alphabet use to print a-z
 *
 *Return: returnnothind
 *
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
