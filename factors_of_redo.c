#include <stdio.h>

int main()
{
	int i;

	printf("factors of 2 & 3 are: ");
	for (i = 0; i <= 100; i++)
	{
	if (i%2 == 0)
		if (i%3 == 0)
			printf("%d ", i);
		else
			;
	else
		;
	}
	putchar(10);
	return (0);
}
