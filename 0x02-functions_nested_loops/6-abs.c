#include "main.h"

/**
 * _abs - Computes the absolute
 * value of an integer
 '*
 * @n: Parameter input as integer
 * Return: type int
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
	_putchar('\n');
}
