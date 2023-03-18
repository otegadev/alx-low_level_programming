#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lpa = 'z';

	while (lpa >= 'a')
	{
		putchar(lpa);
		lpa--;
	}
	putchar('\n');
	return (0);
}
