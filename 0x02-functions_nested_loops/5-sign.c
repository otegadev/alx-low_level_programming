#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: The parameter input as an integer
 *
 * Return: 1 if greater than zero.
 * 0 if equal to 0. -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
