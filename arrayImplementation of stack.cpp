// array implementation of stack


#include<stdio.h>
#include<stdlib.h>      /* for exit() */


#define SIZE 100


// declared here as global variable stack[]

int stack[SIZE];
int top = -1;

/* define push operation */

void push(int item)
{
	if(top >= SIZE-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top = top+1;
		stack[top] = item;
	}
}

/* define pop operation */
int pop()
{
	int item ;

	if(top <0)
	{
		printf("stack under flow: invalid infix expression");
		getchar();
		/* underflow may occur for invalid expression */
		/* where ( and ) are not matched */
		exit(1);
	}
	else
	{
		item = stack[top];
		top = top-1;
		return(item);
	}
}
int isFull()
{
	if (stack[top]>=SIZE-1)
	{
		printf("Stack is full");
	}else
	{
		printf("Not full");
	}
}

int isEmpty()
{
	if (top==-1)
	{
		printf("Empty");
	}else
	{
		printf("Not Empty");
	}
}
int peek()
{
	if (top>=0)
	{
		printf("%d",stack[top]);
	}
	else
	{
		printf("Nothing to peek");
	}
}

int main()
{
	int x,a, p = 1;
	while(p!=0)
	{
		printf("\nselect an item\n1.push\n2.pop\n3.peek\n4.is empty\n5.is full\n6.exit\n");
		scanf("%d", &x);
		switch(x)
		{
			case 1:
				printf("Enter the item to be pushed\n");
				scanf("%d", &a);
				push(a);
				break;
			
			case 2:
				pop();	
				break;
				
			case 3:
				peek();
				break;
				
			case 4:
				isEmpty();
				break;
				
			case 5:
				isFull();
				break;
			
			case 6:
				p--;	
				break;	
				
			default:
				printf("Invalid input! try again");	
				break;				
		}
	}
	return 0;
	
}
