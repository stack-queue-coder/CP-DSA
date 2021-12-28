#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
   struct node* link;
}*head=NULL,*top=NULL,*newnode,*delnode,*temp,*prev;
void getnode()
{
    newnode=(struct node*)malloc(sizeof(struct node));
}
void readnode()
{
   printf("Enter Data : ");
   scanf("%d",&newnode->data);
   newnode->link=NULL;
}
void push()
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
                top=newnode;
            }
            else
            {
                top->link=newnode;
                top=top->link;
            }
            
        }
}
void pop()
{
    if(head==NULL)
    {
        printf("No Element Present!!\n");
        return;
    }
    else if(head==top)
    {
        delnode=top;
        head=NULL;
        top=NULL;
        free(delnode);   
    }
    else
    {
        delnode=top;
        temp=head;
        while(temp->link!=NULL)
        {
            prev=temp;
            temp=temp->link;
        }
        top=prev;
        top->link=NULL;
        free(delnode);
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
int main()
{
    int op,ch;
	do
	{
		printf("1.Push\n");
		printf("2.POP\n");
		printf("3.Display\n");
		printf("Enter Your Option\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;	
		}
        printf("Do You Want To Continue(Press 1) : ");
        scanf("%d",&ch);
	}while(ch==1);
return 0;
}

