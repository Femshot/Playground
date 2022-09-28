#include <stdio.h>
#include <math.h>

int main(void)
{
	double x;

	x = 45.0; /* 45 degree */
	x *= 3.141593 / 180.0; /* convert to radians */
	printf("The sine of 45 is: %lf.\n", sin(x));
	printf("The cosine of 45 is: %lf.\n", cos(x));
	printf("The tangent of 45 is: %lf.\n", tan(x));
	
	return 0;
}
