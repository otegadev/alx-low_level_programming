#include "main.h"

/**
 * _isalpha - Checks if an character is a letter
 *
 * @c: Character in ASCII code
 *
 * Return: 1 for letter. 0 for others
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
