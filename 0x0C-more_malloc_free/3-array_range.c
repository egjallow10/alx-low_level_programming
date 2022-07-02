#include "main.h"
#include <stdio.h>
#include <stdio.h>

/**
 * *array_range -  create an array of integers
 * @min: size of the array
 * @max: char to initialize
 * Return: pointer to the array initialized or NULL
 */

int *array_range(int min, int max)
{
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		a[i] = min + i;
	return (a);
}
