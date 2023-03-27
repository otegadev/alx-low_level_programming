#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: Array to be print
 * @n: Number of elments to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}

	}
	printf("\n");
}
