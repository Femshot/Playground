#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a;
	signed char b;
	unsigned char c;
	int d;
	short int e;
	unsigned int f;
	long int g;
	unsigned long int h;
	long long int i;
	unsigned long long int j;
	float k;
	double l;
	long double m;
	int *p;

	printf("size of char: %lu bytes\n", sizeof(a));
	printf("size of signed char: %lu bytes\n", sizeof(b));
	printf("size of unsigned char: %lu bytes\n", sizeof(c));
	printf("size of int: %lu bytes\n", sizeof(d));
	printf("size of short int: %lu bytes\n", sizeof(e));
	printf("size of unsigned int: %lu bytes\n", sizeof(f));
	printf("size of long int: %lu bytes\n", sizeof(g));
	printf("size of unsigned long int: %lu bytes\n", sizeof(h));
	printf("size of long long int: %lu bytes\n", sizeof(i));
	printf("size of unsigned long long int: %lu bytes\n", sizeof(j));
	printf("size of float: %lu bytes\n", sizeof(k));
	printf("size of double: %lu bytes\n", sizeof(l));
	printf("size of long double: %lu bytes\n", sizeof(m));
	printf("size of pointer: %lu bytes\n", sizeof(p));

	return (0);
}
