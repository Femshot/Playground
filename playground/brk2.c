#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a;

   /* while loop execution */
   for(a = 10;  a < 20; a++ ) {

      printf("value of a: %d\n", a);
		
      if( a > 15) {
         /* terminate the loop using break statement */
         break;
      }
   }
 
   return 0;
}
