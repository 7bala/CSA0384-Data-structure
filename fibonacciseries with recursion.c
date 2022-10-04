#include<stdio.h>
int fibo(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	else
	{
		return (fibo(n-1)+fibo(n-2));
	}
}
int main()
{
	int a,i,m=0;
	printf("Enter number of elements :");
	scanf("%d",&a);
	printf("Fibonacci series :\n");
	for(i=0;i<a;i++)
	{
		printf("%d\n",fibo(m));
		m++;
	}	
}
