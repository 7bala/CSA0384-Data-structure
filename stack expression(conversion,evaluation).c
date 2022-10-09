#include<stdio.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define max 5
char stack[100];
int top=-1;
struct stack
{
    char stk[max];
	int top;
};
struct stack s;
	void push1(char);
	int pop1();
void push(char x)
{
    stack[++top]=x;
}

char pop()
{
    if(top==-1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x=='(')
        return 0;
    if(x=='+'||x=='-')
        return 1;
    if(x=='*'||x=='/')
        return 2;
    return 0;
}
int con()
{
	char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e=exp;
    while(*e!='\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e==')')
        {
            while((x=pop())!='(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    while(top!=-1)
    {
        printf("%c ",pop());
    }
}
void push1(char item)
	{
		int num;
		if (s.top == (max - 1))
	    	printf ("Stack is Full\n");
		else
		{
			s.top = s.top + 1;
			s.stk[s.top] = item;
			num=(int)item-'0';
			printf("\n%d pushed in stack",num);
	    }
	}
int pop1()
	{
		char item;
		int num;
		if (s.top == - 1)
		{
			printf ("\nStack is Empty\n");
			exit(0);
	    }
		else
		{
			item=s.stk[s.top];
			s.top = s.top - 1;
			num=(int)item-'0';
			printf("\n%d popped from stack",num);
			return(num);
		}
	}
int eva()
{
    	s.top=-1;
	    char value,op,result,exp[100];
	    int x,y,t;
	    printf("\nEnter expression: ");
	    scanf("%s",exp);
	    int i=0;
	    while(exp[i]!='#')
	    {
	        if((exp[i]=='0')||(exp[i]=='1')||(exp[i]=='2')||(exp[i]=='3')||(exp[i]=='4')||(exp[i]=='5')||(exp[i]=='6')||(exp[i]=='7')||(exp[i]=='8')||(exp[i]=='9'))
	            push1(exp[i]);
	        else
	        {
	            op=exp[i];
	            y=pop1();
	            x=pop1();
	            if(op=='+')
	                t=x+y;
	            else if (op=='-')
	                t=x-y;
	            else if (op=='*')
	                t=x*y;
	            else if (op=='/')
	                t=x/y;
	            else
	                t=pow(x,y);
	            result=t+'0';
	            push1(result);
	        }
	    i++;
	    }
	value=pop1();
	printf("\nexpression=%d",value);
}
int main()
{
	int a,e,b;
	x:e=0;
	printf("1.Expression conversion \n2.Expression evaluation \nEnter your choice:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			con();
			break;
		case 2:
			eva();
			break;
		default:
			printf("INVALID INPUT");
			break;
	}
	printf("\nPress 1 to continue ");
	scanf("%d",&b);
	if(b==1)
	{
		goto x;
	}
	else
	{
		exit(0);
	}
}
