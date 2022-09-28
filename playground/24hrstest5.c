#include <stdio.h>

/**
 * main - entry point
 * Description: loopsand prints input from stdin until 'x' is entered then it exits loop
 * Retun: 0
 */

int main()
{
	int c;

		printf("Enter a character:\n(enter x to exit)\n");
		while (c != 'x')
		{
			c = getchar();
			putchar(c);
		}

		printf("\nOut of the while loop. Bye!\n");
	return 0;
}
