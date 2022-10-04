#include<stdio.h>
int main()
{
	int a,i,c,e;
	int b[100],d=0;
	printf("Enter number of elements in the array :");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&b[i]);
	}
	printf("Array elements :");
	for(i=0;i<a;i++)
	{
		printf("\t%d",b[i]);
	}
	printf("\nEnter element to be searched :");
	scanf("%d",&c);
	for(i=0;i<a;i++)
	{
		if(b[i]==c)
		{
			d=1;
			e=i;
			break;
		}
		else
		{
			continue;	
		}
	}
	if(d==1)
	{
		printf("Element is found using linear search and its position is %d",e);
	}
	else
	{
		printf("Element is not found in the given array");
	}
}
