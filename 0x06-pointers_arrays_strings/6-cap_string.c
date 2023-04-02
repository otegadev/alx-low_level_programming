#include "main.h"

/**
* cap_string - Capitalises the first
* letters of words in string
* @s: Strings to be passed and modified
* Return: char s
*/

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (((s[i] >= '\t' && s[i] <= '\v') || (s[i] >= 32 &&
	s[i] <= 34) || (s[i] >= 40 && s[i] <= 41) ||
	(s[i] == 44) || (s[i] == 46) || (s[i] == 59) ||
	(s[i] == 63) || (s[i] == 123) || (s[i] == 125))
	&& (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
	{
		s[i + 1] = s[i + 1] - 32;
	}
	}
	return (s);
}
