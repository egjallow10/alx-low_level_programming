#include <stdio.h>
#include "main.h"
/**
 * *_memcpy - copies memoryfrom src to dest
 *
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: how many bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
