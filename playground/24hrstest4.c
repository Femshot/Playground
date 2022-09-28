#include<stdio.h>

/**
 * main - Entry point
 * Description: Takes input of 4 characters from stdin and displays to stdout
 * Return: 0 always
 */

int main()
{
	char P,	Q, R, S;

	printf("enter a four letter word: ");
	scanf("%c%c%c%c", &P, &Q, &R, &S);

	printf("you like %c%c%c%c?\n", P, Q, R, S);

	return (0);
}
