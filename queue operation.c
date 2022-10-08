#include<stdio.h>
int main()
{
	int a,c,d,e,f,i;
	int b[100];
	int rear=-1,front=-1;
	printf("Enter size of queue : ");
	scanf("%d",&a);
	x:e=0;
	printf(" 1. ENQUEUE()\n 2. DEQUEUE()\n 3. DISPLAY()\n Enter your choice :");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			if(rear<a-1)
			{
				printf("Enter element :");
				scanf("%d",&f);
				rear+=1;
				b[rear]=f;
				printf("Element is added\n");
			}
			else
			{
				printf("QUEUE is full\n");
			}
			break;
		case 2:
			if(front==a-1)
			{
				printf("QUEUE is empty\n");
				front=-1;
				rear=-1;
			}
			else
			{
				front+=1;
				printf("The Dequeue element is %d",b[front]);
			}
			break;
		case 3:
			if(rear>=0 )
			{
				printf("queue :");
				front+=1;
				for(i=front;i<=rear;i++)
				{
					printf("\n%d",b[i]);
				}
			}
			else
			{
				printf("Queue is empty ");
			}
			break;
		default:
			printf("You have entered wrong choice");
			break;
	}
	printf("\nTo continue press 1:");
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
