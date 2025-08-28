#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 100
typedef struct 
{
	int arr[MAX_SIZE];
	int top=-1;
}Stack;
void push(Stack *stack,int val)
{
	if(stack->top==MAX_SIZE)
	{
		printf("Stack overflow.\n");
		return;
	}
	stack->arr[++stack->top]=val;
	printf("Pushed value into stack.\n");
}
int pop(Stack *stack)
{
	if(stack->top==-1)
	{
		printf("Stack underflow.\n");
		return -1;
	}
	stack->top--;
	printf("Popped value from stack.\n");
}
void isempty(Stack *stack)
{
	if (stack->top==-1)
	{
		printf("Stack is empty.\n");
	}
	else printf("Stack is not empty.\n");
}
void isfull(Stack *stack)
{
	if (stack->top==MAX_SIZE)
	{
		printf("The stack is full.\n");
	}
	else printf("The stack is not full.\n");
}
void display(Stack *stack)
{
	int i;
	for(i=0;i<=stack->top;i++)
	{
		printf(" %d \n",stack->arr[i]);
	}
}
void peek(Stack *stack)
{
	printf("top element is %d\n", stack->arr[stack->top]);
}

int main()
{
	Stack stack;
	int c=10;
	while(c!=0)
	{
	printf("Press 1 to push an element into the stack.\n");
	printf("Press 2 to pop an element from the stack.\n");
	printf("Press 3 to check if stack is empty.\n");
	printf("Press 4 to check if stack is full/\n");
	printf("Press 5 to display the entire stack.\n");
	printf("Press 6 to peek the top element of the stack.\n");
	printf("Press 0 to exit the program.\n");
	scanf("%d",&c);
	switch (c)
	{
		case 1:
			int val;
			printf("Enter value.\n");
			scanf("%d",&val);
			push(&stack,val);
			break;
		case 2:
			 pop(&stack);
			break;
		case 3:
		     isempty(&stack);	
		    break;
		case 4:
			 isfull(&stack);
			break;
		case 5:
			 display(&stack);
			break;
		case 6:
			 peek(&stack);
			break;
	}
}
}