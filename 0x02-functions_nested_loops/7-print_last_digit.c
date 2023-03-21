#include "main.h"

/**
 * print_last_digit - prints the
 * last digit of a number
 *
 * @g: Parameter input as integer
 *
 * Return: Value of last digit
 */

int print_last_digit(int g)
{
	int l = g % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
