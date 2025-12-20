#include<stdio.h>
int factorial(int n);
int main()
{
	int n,result;
	printf("enter n value");
	scanf("%d",&n);
	
	printf("\n %d factorial is %d ",n,factorial(n));
	return 0;
}
int factorial(int n)
{
	if(n>1)
	{
		return (n*factorial(n-1));
	}
	else
	{
		return 1;
	}
}
