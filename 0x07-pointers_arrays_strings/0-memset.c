#include "main.h"

/**
 * _memset - Functions that fills memory
 * with a constant byte
 * @s: Parameter passed, (Array)
 * @b: Value to fill the memory
 * @n: number of bytes to fill
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
