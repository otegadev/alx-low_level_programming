#include "main.h"

/**
 * _strlen - Returns the lenght of a string
 * @s: string to be passed
 * Return: void
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
