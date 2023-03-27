#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: argument (string) to be passed
 * Return: (0)
 */

void rev_string(char *s)
{
	int bc = 0;
	int b = 0;
	char *x = s;
	int y = 0;
	int z;
	char n;

	while (*x != '\0')
	{
		x++;
		bc++;
	}

	b = bc - 1;
	for ( ; y < ((b / 2) + 1); y++)
	{
		z = (b - y);
		n = s[y];
		s[y] = s[z];
		s[z] = n;
	}
}
