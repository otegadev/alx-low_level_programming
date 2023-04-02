#include "main.h"

/**
 * _strlen - Function to get the lenght of a string
 * @s: String passed
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int le = 0;

	while (*s != '\0')
	{
		s++;
		le++;
	}
	return (le);
}

/**
 * _strncat - Functions concatenates n number of
 * characters in source string to destination string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters in source string
 * to be concatenated
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l1;
	int l2;
	int i;

	l1 = _strlen(dest);
	l2 = _strlen(src);

	for (i = 0; i < n; i++)
	{
		dest[l1 + i] = src[i];
	if (i > l2)
	{
		break;
	}
	}
	return (dest);
}
