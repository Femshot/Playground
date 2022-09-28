#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints out a grouping of even numbers and odd numbers
 * from 0 - 10
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Even numbers: ");
	for (i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			printf("%d ", i);
	}
	printf("\b\nOdd numbers: ");
	for (i = 0; i < 10; i++)
	{
		if (i % 2 != 0)
			printf("%d ", i);
	}
	printf("\b\n");
	return (0);
}
