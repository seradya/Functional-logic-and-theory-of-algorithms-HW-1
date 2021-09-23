#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	signed long a = 0;
	char b = 0;
	double result = 0.0;

	scanf("%ld|", &a);
	result += abs(a);

	double multiplier = 0.1; //position of number
	while((b = getchar()) != '\n')
	{
		b -= '0';
		result += (b*multiplier);
		multiplier *= multiplier;
	}

	if (a < 0)        //reverse sign
		result *= -1;

	printf("%lf", result);
	return 0;
}