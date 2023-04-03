#include "main.h"

/**
 * _memcpy - Function copies a memory area
 * @dest: Destination area to copy to
 * @src: source area to be copied from
 * @n: number of bytes from src to be copied
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
