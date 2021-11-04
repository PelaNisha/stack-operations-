// linked list implementation of stack
#include<stdio.h>
#include<malloc.h>


struct Node{
	int info;
	struct Node *next;
};

typedef Node N;
N *top=NULL;

void push()
{
	N *nnode;
	int el;
	nnode = (N*)malloc(sizeof(N));
	printf("Enter the element\n");
	scanf("%d", &el);
	nnode->info = el;
	if(top==NULL)
	{
		top = nnode;
		top->next= NULL;
		printf("element pushed in first\n");
	}
	else
	{
//		top->next=nnode->info;
		nnode->next= top;
		top = nnode;
		printf("element pushed\n");
	}
}

void pop()
{
	N *temp;
	if(top==NULL)
	{
		printf("No item to pop (stack empty)\n");
		
	}else
	{
		temp = top;
		top= top->next;
		free(temp);
		printf("Element poped\n");
	}
}
void display()
{
	N *temp;
	if(top==NULL)
	{
		printf("No item to display (stack empty)\n");
		
	}else
	{
		temp = top;
		while(temp->next!=NULL)
		{
			printf("%d\n", temp->info);
			temp = temp->next;
		}
		printf("%d \n", temp->info);
	}
}

int main()
{
	int a, b, c;
	do{
		printf("Enter the options:\n1.Push\n2.Pop\n3.Display\n4.exit\n");
		scanf("%d", &a);
		switch(a)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				b=2;
				break;
					
		}
	}while(b!=2);
	return 0;
}
