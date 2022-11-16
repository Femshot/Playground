#include <stdio.h>
int main()
{
  char str[1000], rev[1000];
  int i, j, count = 0;
  scanf("%s", str);
  printf("\nString Before Reverse: %s", str);
  //finding the length of the string
  while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;

  //reversing the string by swapping
  i = 0;
  while (i < count)
  {
    rev[i++] = str[j--];
  }

  printf("\nString After Reverse: %s\n", rev);
}
