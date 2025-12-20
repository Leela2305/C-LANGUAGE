#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("enter temperature in fahrenheit;");
	scanf("%f",&fahrenheit);
	celsius=(5.0/9.0)*(fahrenheit-32);
	printf("celsius=%.2f",celsius);
	return 0;
}
