#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int p;

	for (p = 1; p < 100; p++)
	{
		if ((p % 5 == 0) && (p % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (p % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (p % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", p);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
