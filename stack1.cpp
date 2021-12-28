#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int stack[CAPACITY],top= -1;
void push(int);
int isFull();
int pop();
int isEmpty();
void peek();
void traverse();


int main(){
	int ch,item;
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.peek\n");
	printf("4.traverse\n");
	printf("5.exit\n");
	
	printf("enter your choice\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1 : push();
		         printf("%d is pushed",item); 
		case 2 : item=pop();
		         if(item==0){
		         	printf("stack is underflow");
				 }
		case 3 : peek();
		case 4 : traverse();
		case 5 : exit(0);
	   default : printf("invalid input");
	}
 return 0;
} 
void push(int ele){
	if (isFull())
	{
		printf("stack is overflow");
	}
    else
    {
    	top++;
		stack[CAPACITY]=ele;
	    
	}
                 }
int isFull(){
	if(top==CAPACITY-1){
		return 1;
	}
	else
	{   
	   return 0;
	}
            } 
int pop(){
	if(isEmpty()){
	   return 0; 
	}
    else
    {
        item=stack[top--];
	}
        }
int isEmpty(){
	if(top==-1){
		return 1;
	}
	else
	{
		return 0;
	}
}        
