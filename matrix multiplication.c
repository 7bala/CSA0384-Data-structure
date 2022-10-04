#include<stdio.h>
int main()
{
	int a,b,i,j,k;
	int e[10][10],f[10][10],mul[10][10];
	printf("Enter no of rows :");
	scanf("%d",&a);
	printf("Enter no of column :");
	scanf("%d",&b);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			printf("Enter element of matrix 1[%d][%d]:",i,j);
			scanf("%d",&e[i][j]);
		}
	}
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			printf("Enter element of matrix 2[%d][%d]:",i,j);
			scanf("%d",&f[i][j]);
		}
	}
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			mul[i][j]=0;
			for(k=1;k<=b;k++)
			{
				mul[i][j]+=e[i][k]*f[k][j];
			}
		}
	}
	printf("Matrix 1:\n");
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			printf("%d\t",e[i][j]);
		}
		printf("\n");
	}
	printf("Matrix 2:\n");
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			printf("%d\t",f[i][j]);
		}
		printf("\n");
	}
	printf("Multiplied matrix:\n");
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
