#include<stdio.h>
int main()
{
	int a,c,d,i,z,g,e,f;
	int b[100];
	printf("Enter number of element in array :");
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{
		printf("Enter element a[%d] :",i);
		scanf("%d",&b[i]);
	}
	x:e=0;
	printf("1.Insert element \n2.Delete element \n3.Display element \nEnter your choice:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			c+=1;
			printf("Enter element to be inserted :");
			scanf("%d",&z);
			printf("Enter position to be inserted :");
			scanf("%d",&f);
			if(f>c-1)
			{
				printf("INVALID POSITION");
			}
			else
			{
				for(i=c-1;i>=f;i--)
				{
					b[i+1]=b[i];
				}
				b[f]=z;
			}
			printf("The element is inserted ");
			break;
		case 2:
			printf("Enter position of element to be deleted :");
			scanf("%d",&f);
			if(f>=c+1)
			{
				printf("INVALID POSITION");
			}
			else
			{
				for(i=f;i<c-1;i++)
				{
					b[i]=b[i+1];
				}
			}
			printf("The element is deleted ");
			c=c-1;
			break;
		case 3:
			printf("Displaying the array :");
			for (i=0;i<c;i++)
			{
				printf("\t%d",b[i]);
			}
			break;
		default:
			printf("You have choose wrong choice");
			break;
			
	}
	printf("\n Do you want to continue(1-Yes/0-No); ");
	scanf("%d",&d);
	if(d==1)
	{
		goto x;
	}
	else
	{
		getch();
	}
}
