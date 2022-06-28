#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return a pointer space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		;
	s = malloc(i + 1);
	if (s == 0 || s == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		s[i] = *(str + i);
	}
	s[i] = *(str + i);
	return (s);
}
