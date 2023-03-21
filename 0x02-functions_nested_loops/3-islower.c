#include "main.h"

/**
 * _islower - checks if a letter is lowercase
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowecase. 0 for others
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

