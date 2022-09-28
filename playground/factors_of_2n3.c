#include <stdio.h>

/**
 * main - entry point of code
 * Description: prints of factors of 2 & 3 from 0 - 100
 * Return: 0 
 */

int main(void)
{
	char c = '\n';
	int i;

		printf("factors of 2 or 3 from\
 0 - 100 are... ");
		for (i = 0; i <= 100; i++)
		{
			if (i%2 == 0 || i%3 == 0)
				printf("%d ", i);
		}
	
	putchar(10);
	return (0);
}
