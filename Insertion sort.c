#include<stdio.h>
void inser(int a[],int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
}
void print(int a[],int n)
{
	int i;
	printf("Sorted array :");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int main()
{
	int a[100];
	int n,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element[%d] :",i+1);
		scanf("%d",&a[i]);
	}
	inser(a,n);
	print(a,n);
}
