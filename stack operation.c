#include<stdio.h>
int main()
{
	int a,c,d,e,f,i;
	int b[100];
	int top=-1;
	printf("Enter size of stack : ");
	scanf("%d",&a);
	x:e ;
	printf(" 1. Push()\n 2. Pop()\n 3. Peek()\n Enter your choice :");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			if(top<a-1)
			{
				printf("Enter element :");
				scanf("%d",&f);
				top+=1;
				b[top]=f;
				printf("Element is added\n");
			}
			else
			{
				printf("Stack is full\n");
			}
			break;
		case 2:
			if(top<=-1)
			{
				printf("Stack is empty\n");
			}
			else
			{
				printf("The poped element is %d",b[top]);
				top-=1;	
			}
			break;
		case 3:
			if(top>=0)
			{
				printf("STACK :");
				for(i=top;i>=0;i--)
				{
					printf("\n%d",b[i]);
				}
			}
			else
			{
				printf("Stack is empty ");
			}
			break;
		default:
			printf("You have entered wrong choice");
			break;
	}
	printf("\nDo you want to continue (1-yes/0-no):");
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
