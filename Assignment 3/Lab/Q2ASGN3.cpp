#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 200
typedef struct{
	char word[MAX_SIZE];
	int top;
}Stack;
int main()
{
	Stack stack;
	printf("Enter your word.\n");
	scanf("%s",stack.word);
	int size=sizeof(stack.word);
	stack.top=size-1;
	int i;
	for(i=0;i<size/2;i++)
	{
		char temp=0;
		temp=stack.word[stack.top-i];
		stack.word[stack.top-i]=stack.word[i];
		stack.word[i]=temp;
	}
	for(i=0;i<size;i++)
	{
		printf("%c",stack.word[i]);
	}
	return 0; 
}