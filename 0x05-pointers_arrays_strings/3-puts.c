#include "main.h"
#include <unistd.h>

/**
 *  _puts - Prints a string to stdout
 *
 *  @str: String to be printed
 *
 *  Return: void
 */

void _puts(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
