#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap values of two numbers
 * @b: first pointer
 * @a: second pointer
 * Retuen: void
 */
void swap_int(int *a, int *b)
{
	int constant = *a;
	*b = *a;
	*a = constant;
}
