#include<stdio.h>
int binarys(int b[100],int c,int d,int m)
{
	if(d>m)
	{
		return 0;
	}
	else
	{
		int mid;
		mid=(d+m)/2;
		if(c==b[mid])
		{
			return mid;
		}
		else if(c>b[mid])
		{
			return binarys(b,c,mid+1,m);
		}
		else
		{
			return binarys(b,c,d,mid-1);
		}
	}
}
int main()
{
	int a,i,c,e,m,z;
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
	z=binarys(b,c,d,a);
	if(z==0)
	{
		if(b[z]==c)
		{
			printf("The element %d is found in the index value of %d",c,z);
		}
		else
		{
			printf("The element is not present in the list");
		}
	}
	else
	{
		printf("The element %d is found in the index value of %d",c,z);
	}
}
