#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 5, fact;

	fact = 1;
	while (i != 0)
	{
		fact *= i;
		i--;
	}
	printf("%d\n", fact);
	return 0;
}
