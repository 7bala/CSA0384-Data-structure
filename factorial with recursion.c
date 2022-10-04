#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int a,b;
	printf("Enter a positive number :");
	scanf("%d",&a);
	b=fact(a);
	printf("Factorial of %d is %d",a,b);
}
