#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
	double x, a, b, c;

	x = 45.0; /* 45 degree */
	x *= 3.141593 / 180.0; /* convert to radians */
	a = sin(x);
	b = cos(x); 
	c = tan(x);
	
	printf("The sine of 45 is: %lf.\n", a);
	printf("The cosine of 45 is: %lf.\n", b);
	printf("The tangent of 45 is: %lf.\n", c);
	printf("hope this worked");
	
	return 0;
}
