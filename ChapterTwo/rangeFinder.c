#include <stdio.h>

int main()
{
	signed int a;
	signed char b;
	signed short c;
	signed long d;

	while (a > 0)
	{
		a++;
	}
	printf("%i\n", a);

	while (b > 0)
	{
		b++;
	}
	printf("%i\n", b);

	while (c > 0)
	{
		c++;
	}
	printf("%i\n", c);

	while (d > 0)
	{
		d++;
	}
	printf("%li\n", d);

	return 0;
}
