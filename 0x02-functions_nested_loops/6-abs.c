#include "main.h"
#include <ctype.h>
/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @i: integer that you are testing sign of
 * Return: absolute values
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
