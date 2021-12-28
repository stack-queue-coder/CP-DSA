#include<stdio.h>
#include<stdlib.h> 
#include<ctype.h>     
#include<string.h>
#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char x)
{
	if(top >= SIZE-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top = top+1;
		stack[top]=x;
	}
}

char pop()
{
	char x;

	if(top <0)
	{
		printf("stack is empty");
		getchar();
		exit(1);
		
	}
	else
	{
		x=stack[top];
		top = top-1;
		return(x);
	}
}

int op(char symbol)
{
	if(symbol=='^'||symbol=='*'||symbol=='/'||symbol=='+'||symbol=='-')
	{
		return 1;
	}
	else
	{
	return 0;
	}
}
int sen(char symbol)
{
	if(symbol=='^')
	{
		return(3);
	}
	else if(symbol=='*'||symbol=='/')
	{
		return(2);
	}
	else if(symbol=='+'||symbol=='-')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int itop(char ine[],char poe[])
{ 
	int i,j;
	char a;
	char x;

	push('(');                             
	strcat(ine,")");                 

	i=0;
	j=0;
	a=ine[i];         

	while(a!='\0')        
		{
		if(a== '(')
		{
			push(a);
		}
		else if(isdigit(a)||isalpha(a))
		{
			poe[j]=a;         
			j++;
		}
		else if(op(a)==1)    
		{
			x=pop();
			while(op(x)==1&&sen(x)>=sen(a))
			{
				poe[j]=x;        
				j++;
				x=pop();                 
			}
			push(x);
			push(a); 
		}
		else if(a==')')
		{
			x=pop();                 
			while(x!='(')              
			{
				poe[j]=x;
				j++;
				x=pop();
			}
		}
		else
		{ 
			printf("\nInvalid infix Expression.\n");        
			getchar();
			exit(1);
		}
		i++;


		a=ine[i]; 
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");        
		getchar();
		exit(1);
	}
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");        
		getchar();
		exit(1);
	}


	poe[j]='\0'; 
}
}

int main()
{
	char infix[SIZE], postfix[SIZE];         

	printf("\nEnter Infix expression : ");
	gets(infix);

	itop(infix,postfix);                   
	printf("Postfix Expression: ");
	puts(postfix);                    

	return(0);
}

