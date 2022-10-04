#include<stdio.h>
int main()
{
	int a[100],b,i;
	printf("Enter number of elements in set :");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		printf("Enter element %d:",i);
		scanf("%d",&a[i]);	
	}	
	for(i=1;i<=b;i++)
	{
		if(a[i]%2==0)
		{
			printf("The number %d is even\n",a[i]);
		}
		else
		{
			printf("The number %d is odd\n",a[i]);
		}
	}
}
