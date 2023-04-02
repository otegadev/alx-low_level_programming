#include "main.h"

/**
 * _strlen - Function to get the lenght
 * of a string
 * @s: string to be passed
 * Return: lenght of string passed
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
 * _strcat - Function to concatenate two strings
 * @dest: Destination string
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int l1, l2;
	int i;

	l1 = _strlen(dest);
	l2 = _strlen(src);

	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (dest);
}
