#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Strings to be compared
 * @s2: String to be compared
 * Return: Success (Always 0)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i] && s1[i] > s2[i])
		return (15);
	else if (s1[i] != s2[i] && s1[i] < s2[i])
		return (-15);
	else
		return (0);
	}
	return (0);
}
