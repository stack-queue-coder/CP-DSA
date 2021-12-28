#include<stdio.h>
int stack[10],size,top=-1;
void push(int a)
{
        stack[++top]=a;
}
void pop()
{
        top--;
}
int main()
{
	int A[10],n;
	printf("Enter the no of Elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&A[i]);
	push(A[0]);
	for(int i=1;i<n;i++)
	{
		if(stack[top]<A[i])
		{
			printf("\n%d -> %d",stack[top],A[i]);
			pop();
			push(A[i]);
		}
		else
		{
			push(A[i]);
		}
	}
	while(top>-1)
	{
		printf("\n%d -> -1",stack[top]);
		pop();
	}
}

