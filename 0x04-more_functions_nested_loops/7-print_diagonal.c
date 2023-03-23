#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * on the terminal
 *
 * @n: lenght of the diagonal, argument
 * to be passed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
	for (j = 0; j <= i; j++)
	{
		if (j == i)
		{
		_putchar(92);
		_putchar('\n');
		}
		else
		{
		_putchar(' ');
		}
	}
	}

}
