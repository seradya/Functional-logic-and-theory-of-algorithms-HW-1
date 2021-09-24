#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	signed long a = 0;
	signed long b = 0;
	double result = 0.0;

	scanf("%ld|%ld", &a, &b);
	result += abs(a);

	int count = 0;
	int c = b;
	while (c > 0)
	{
		count++;
		c = c / 10;
	}

	result += (b / pow(10, count));
	if (a < 0)        //reverse sign
		result *= -1;

	printf("%.10lf", result);
	return 0;
}