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
	printf("p = a;\np: %p\np = &a = %p\n", p, a);
	printf("p + 1 = &a[1]: %p\np + 1 = a + 1: %p\n", &(a[1]), (a + 1));
	printf("a[0] = %p\na[1] = %p\n", &(*(a)), &(*(a + 1)));
	return (0);
}
