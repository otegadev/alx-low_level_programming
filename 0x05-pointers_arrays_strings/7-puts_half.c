#include "main.h"

/**
 * puts_half - Prints the second
 * half of a string
 * @str: Argument string to be passed
 * Return: void
 */

void puts_half(char *str)
{
	int x = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		x++;
	}

	if (x % 2 == 0)
	{
		z = x / 2;
	}
	else
	{
		z = (x + 1) / 2;
	}
	for ( ; z < x; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
