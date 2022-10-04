#include<stdio.h>
int main()
{
	int a,f=1,i;
	
	printf("Enter a positive number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		f*=i;
	}
	printf("factorial of %d is %d",a,f);
}
