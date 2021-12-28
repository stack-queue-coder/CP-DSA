#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
   struct node* link;
}*front=NULL,*rear=NULL,*newnode,*delnode,*temp,*prev;
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
void enqueue()
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
            if(rear==NULL)
            {
                rear=newnode;
                front=newnode;
            }
            else
            {
                rear->link=newnode;
                rear=rear->link;
            }
            
        }
}
void dequeue()
{
    if(front==NULL)
    {
        printf("No Element Present!!\n");
        return;
    }
    else if(front==rear)
    {
        delnode=front;
        front=NULL;
        rear=NULL;
        free(delnode);   
    }
    else
    {
        delnode=front;
        front=front->link;
        free(delnode);
    }
}
void display()
{
    temp=front;
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
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("Enter Your Option\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;	
		}
        printf("Do You Want To Continue(Press 1) : ");
        scanf("%d",&ch);
	}while(ch==1); 
return 0;
}

