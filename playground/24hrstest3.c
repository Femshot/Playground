#include<stdio.h>

/**
 * main - Entry Point
 * Description: Takes input of 4 characters from stdin and displays to stdout
 * Return: 0
 */

int main(void)
{
	printf("Type any 4 characters: ");

	int a, b, c, d;

	a = getchar();
	b = getchar();
	c = getchar();
	d = getchar();
	
	printf("is it ");
	putchar(a),	putchar(b), putchar(c), putchar(d), putchar('?');
	putchar('\n');

	return (0);
}
