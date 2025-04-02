#include <stdio.h>

int main()
{
	enum boolean { NO, YES };
	enum boolean a = NO;
	enum boolean b = YES;

	printf("%i %i\n", a, b);

	return 0;
}
