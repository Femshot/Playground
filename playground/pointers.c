#include <stdio.h>
#include <stdlib.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */

void modif_my_char_var(char *cc, char ccc)
{
	printf("value of 'cc' - %p\n", cc);
	printf("address of 'cc' - %p\n", &cc);
	printf("value of 'ccc' - %c\n", ccc);
	printf("address of 'ccc' - %p\n", &ccc);
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;

	c = 'H';

	printf("value of 'c' before fun_call - %c\n", c);
	printf("address of 'c' before fun_call - %p\n", &c);
	printf("value of 'p' before fun_call - %p\n", p);
	printf("address of 'p' before fun_cal - %p\n", &p);
	modif_my_char_var(p, c);
	printf("value of 'c' after fun_call - %c\n", c);
	printf("value of *p' aftr fun_call - %c\n", *p);

	return (0);
}
