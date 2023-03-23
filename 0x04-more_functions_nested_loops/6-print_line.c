#include "main.h"

/**
 * print_line - Draws a straight line
 * on the terminal
 *
 * @n: Parameter input indicating
 * the lenght of the line
 *
 * Return: void
 */

void print_line(int n)
{
	char i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');

		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
