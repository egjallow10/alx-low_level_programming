#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print out alphabets 10s
 *
 * Description: return the required results
 *
 * Return: return void
 */
void print_alphabet_x10(void)
{
	char i;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar(10);
	}
	
}
