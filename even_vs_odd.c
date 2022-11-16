#include <stdio.h>

int main()
{
	int i;

	printf("Even Number   Odd Number\n");
	for (i=0; i<10; i++)
		if (i%2 == 0)
			printf("%4d", i);
		else
			printf("%14d\n", i);
	return 0;
}
