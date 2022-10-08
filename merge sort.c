#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int l,int m,int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
	{
		L[i]=a[l+i];
	}
	for(j=0;j<n2;j++)
	{
		R[j]=a[m+1+j];
	}
	i=0;j=0;k=l;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=R[j];
		j++;
		k++;
	}
}
void mergesort(int b[],int z,int x)
{
	if(z<x)
	{
		int y=z+(x-1)/2;
		mergesort(b,z,y);
		mergesort(b,y+1,x);
		merge(b,z,y,x);	
	}
}
void print(int a[],int n)
{
	int i;
	printf("Sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int main()
{
	int a[100],n,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	print(a,n);
}
