#include<stdio.h>
#include<stdlib.h>
struct node
{
   char data;
   struct node* link;
}*head=NULL,*last=NULL,*newnode,*delnode,*temp,*prev;
int stack[10],top=-1;
void getnode()
{
    newnode=(struct node*)malloc(sizeof(struct node));
}
void readnode()
{
   printf("Enter Character : ");
   fflush(stdin);
   scanf(" %c",&newnode->data);
   newnode->link=NULL;
}
void insert()
{
        getnode();
        if(newnode==NULL)
        {
            printf("Memory not Created\n");
            return;
        }
        else
        {
            readnode();
            if(head==NULL)
            {
                head=newnode;
                last=newnode;
            }
            else
            {
                last->link=newnode;
                last=last->link;
            }
            
        }
}

void push(char a)
{
        stack[++top]=a;
}
char pop()
{
 	 	top--;
        return stack[top+1];
}
int main()
{
	int ch;
	printf("Enter The LinkList .\n");
	do
	{
		insert();
		printf("Want To Enter One More Character press 1 : ");
		scanf("%d",&ch);
	}while(ch==1);
	temp=head;
	while(temp!=NULL)
	{
		push(temp->data);
		temp=temp->link;
	}
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data!=pop())
		{
			printf("Not Palindrome......");
			exit(0);
		}
		temp=temp->link;
	}
	printf("Panildrome.....");
	
}

