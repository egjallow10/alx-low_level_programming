#include <stdio.h>
#include "main.h"

/**
 *  * swap_int - swaps the value  integers
 *
 *  @a: firts init pointer
 *  @b: second init pointer
 *  Return void
 */
void swap_int(int *a, int *b)
{
	ini x;

	x = *a;
	*a = *b;
	*b = x;
}
