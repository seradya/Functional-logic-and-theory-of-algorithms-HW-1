#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	signed long a = 0;
	char b = 0;
	double result = 0.0;
	scanf("%ld|", &a);

	result += abs(a);

	double multiplier = 0.1; 
	while((b = getchar()) != '\n')
	{
		b -= '0';
		result += (b*multiplier);
		multiplier *= 0.1;
	}

	if (a < 0)
		result *= -1.0;

	printf("%lf", result);
	return 0;
}