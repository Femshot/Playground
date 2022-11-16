#include<stdio.h>

/**
 * main - Entry point
 * Description: Takes input of 4 characters from stdin and displays to stdout
 * Return: 0 always
 */

int main()
{
	char P[6], Q[7], R[8], S[9];

	printf("enter four set of sentences: ");
	scanf("%5s %6s %7s %8s", P, Q, R, S);

	printf("%s\n%s\n%s\n%s\n", P, Q, R, S);

	return (0);
}
