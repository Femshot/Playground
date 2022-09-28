/**
 * main - entry point
 * Shows result of 3 multiply 5
 *
 * Return: 0
 */
#include <stdio.h>

/**
 * multiply_2_integars - multiplies two integar numbers
 */
int multiply_2_integars(int a, int b)
{
	int X;

	X = (a * b);
	return (X);
}

int main(void)
{
	int mul;

	mul = multiply_2_integars(3, 5);
	printf("The answer is %d\n", mul);

	return (0);
}
