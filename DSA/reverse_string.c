#include<stdio.h>
#include<string.h>

char stack[20];
int top=-1;

void push(char);
char pop();

void main()
{
	char str[20],ch;
	int l,i;
	printf("\nEnter String: ");
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
		push(str[i]);
	printf("\nReversted String: ");
	for(i=0;i<l;i++)
	{
		ch=pop();
		printf("%c",ch);
	 }
}

void push (char c)
{
	top++;
	stack[top]=c;
}

char pop()
{
	char c;
	c=stack[top];
	top--;
	return c;
}