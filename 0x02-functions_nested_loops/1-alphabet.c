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
	int i,j;
	for(i =0; i < 10; i++)
	{
		for(j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar(10);
	}
}
