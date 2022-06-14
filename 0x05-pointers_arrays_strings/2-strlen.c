#include <stdio.h>
#include "main.h"

/**
 * _strlen - return length of a string
 *
 * @s: char to measure length
 * Return: length of string, n
 */
int _strlen(char *s)
{
	int n, i;

	for (i = 0; *(s + i) != '\0'; i++)
		n++;
	return (n);
}
