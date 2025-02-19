#include <stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("--Fahrenheit to Celsius Table--\n");
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	celsius = lower;
	printf("--Celsius to Fahrenheit Table--\n");
	while (celsius <= upper)
	{
		fahr = (celsius / (5.0/9.0)) + 32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
