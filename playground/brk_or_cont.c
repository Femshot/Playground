#include <stdio.h>

/**
 * main - entry point for loop to test break statement
 * Return: 0
 */

int main(void)
{

	/* local variable definition */
	int a = 10;

	/* while loop execution */
	for (;  a < 20; a++)
	{
		printf("value of a: %d\n", a);

		if (a > 15)
		{
		/* terminate the loop using break statement */
			break;
		}
	}

   /* while loop execution */
	while (a < 20)
	{
		printf("value of a: %d\n", a);
		a++;

		if (a > 19)
		{
		/* terminate the loop using break statement */
			break;
		}
	}

	return (0);
}
