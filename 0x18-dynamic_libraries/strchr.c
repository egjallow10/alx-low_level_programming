#include <stdio.h>
#include "main.h"
/**
 * *_strchr - find the  first char in string
 *
 * @s: pointer to string to search
 * @c: char to look for in s
 * Return: pointer to first occurence /null
 */
char *_strchr(char *s, char c)
{
	int i;
	char *null = NULL;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	else
		return (null);
}
