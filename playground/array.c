#include <stdio.h>

int main(void) /*start of funcion*/
{
	char rray[5];
	int i;

	for(i = 0; i < 5; i++)
	{
		rray[i] = 'a' + i;
		printf("rray[%d] = %c\n", i, rray[i]);
	}

	return (0);
}
