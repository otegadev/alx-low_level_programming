#include "main.h"

/**
 *swap_int - Function swaps the value of ints
 * @a: int to be passed
 * @b: int to be passsed
 * Return: void;
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
