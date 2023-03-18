#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success);
 */

int main(void)
{
	int base1 = 0;
	char base16c = 'a';

	while (base1 <= 9)
	{
		putchar(base1 + '0');
		base1++;
	}
	while (base16c <= 'f')
	{
		putchar(base16c);
		base16c++;
	}
	putchar('\n');
	return (0);
}
