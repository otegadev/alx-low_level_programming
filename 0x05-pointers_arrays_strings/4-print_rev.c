#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: Argument String to be passed
 * Return: void
 */

void print_rev(char *s)
{
	int bac;

	for (bac = 0; s[bac] != '\0'; bac++)
	{
	}
	for (bac = bac - 1; bac >= 0; bac--)
	{
		_putchar(s[bac]);
	}
	_putchar('\n');
}
