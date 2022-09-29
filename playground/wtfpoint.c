#include <stdio.h>

/**
 * main - Displays memory location for when an integar, pointer and an array are
 * declared
 *
 * Return: Always 0.
 */

int main(void)
{
	int *p;
	int a[2];
	int n;

	p = &n;
	printf("p = &n;\np: %p\n", p);
	printf("&p = %p\n", &p); 
	printf("p + 1: %p\n", p + 1);
	printf("p + 3: %p\n", p + 3);
	p = a;
	printf("p = &a[2];\np: %p\np + 1: %p\n", p, p + 1);
	return (0);
}
