#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies string to buffer 
 *
 * @dest: the buffer to copy 
 * @src: source string 
 * Return: pointer to the buffer dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	return (dest);
}

