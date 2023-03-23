#include "main.h"

/**
 * _isdigit - Checks if a character
 * passed is a digit
 *
 * @c: Character to be passed
 * and checked
 *
 * Return: 1 if c is a digit
 * and 0 if c is not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
