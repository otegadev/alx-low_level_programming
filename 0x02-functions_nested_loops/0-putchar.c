#include "main.h"

/**
 * main - Print the word "-putchar"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
		_putchar('\n');
	return (0);
}
