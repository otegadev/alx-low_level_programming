#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural
 * numbers from n to 98
 *
 * @n: parameter input, first
 * to be printed
 *
 * Return: nothing;
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98");
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98");
	}
	else
	{
		printf("98");
	}
	putchar('\n');
}
