#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch = 'A';
	char *pch;

	pch = &ch;
	printf("%c and %p\n", ch, &ch);

	*pch = 66;
	printf("%d and %p\n", (int)ch, pch);
	return 0;
}

