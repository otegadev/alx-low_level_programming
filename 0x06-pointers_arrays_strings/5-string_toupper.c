#include "main.h"

/**
 * string_toupper - Function converts lower letters
 * of a string to upper letter
 * @s: String to be passed
 * Return: char s
 */


char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}
	}
	return (s);
}
