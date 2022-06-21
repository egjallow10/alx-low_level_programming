#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Search a string in set of bytes.
 * @s: string
 * @accept: string  match
 * Return: Pointer to the byte in `s`  bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
}
