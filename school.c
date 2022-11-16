#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the value of a string
 *
 * Return: Always 0.
 */

int main(void)
{
   char a[7] = "School";
   char b = 56;

   printf("%s\n", a);
   printf("Value of the last char of a: %c & %d\n", 5[a], a[6]);
   printf("Value of a: %p\n", a); 
   printf("address of pointer a: %p\n", &a);
   printf("Value of \"School\": %p\n", "School");
   printf("value of b: %c\nadress of b: %p\n", b, &b);
   return (0);
}
