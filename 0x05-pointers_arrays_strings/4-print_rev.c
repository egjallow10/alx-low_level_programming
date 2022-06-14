#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints reverse of a string by a new line
 *
 * @s: string pointer
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0';)
		i++;
	i--;
	for (; i >= 0; i--)
		putchar(*(s + i));
	putchar('\n');
}

