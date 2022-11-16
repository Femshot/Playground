/* Using precision specifiers */
#include <stdio.h>

int main()
{
	int int_num;
	double flt_num;

	int_num = 123;
	flt_num = 123.98897;

		printf("Default integer format:%d\n", int_num);
		printf("With precision specifier:%1.9d\n", int_num);
		printf("Default float format:%f\n", flt_num);
		printf("With precision specifier:%8.4f\n", flt_num);

	return 0;
}
