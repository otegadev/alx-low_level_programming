#include "main.h"

/**
 * _strncpy - Functions copies n number of characters
 * from source string to destination string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to be copied to
 * destination string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		dest[y] = src[y];
	}

	return (dest);
}
