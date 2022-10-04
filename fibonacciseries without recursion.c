#include<stdio.h>
int main()
{
	int a,d,i;
	int b=0,c=1;
	printf("Enter number of elements :");
	scanf("%d",&a);
	printf("Fibonacci series :\n");
	printf("%d\n%d\n",b,c);
	for (i=2;i<a;i++)
	{
		d=b+c;
		printf("%d\n",d);
		b=c;
		c=d;
	}
	
}
