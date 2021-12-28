#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node* link;
}*head=NULL,*last=NULL,*newnode,*delnode,*temp,*prev;
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
void Delete()
{
    if(head==NULL)
    {
        printf("No Node Present!!\n");
        return;
    }
    else if(head==last)
    {
        delnode=head;
        head=NULL;
        last=NULL;
        free(delnode);   
    }
    else
    {
        delnode=last;
        temp=head;
        while(temp->link!=NULL)
        {
            prev=temp;
            temp=temp->link;
        }
        last=prev;
        last->link=NULL;
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
void search()
{
    int x;
    printf("Enter Element To Be Search : ");
    scanf("%d",&x);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==x)
        {
            printf("Element Found \n");
            return;
        }
        temp=temp->link;
    }
    printf("Element Not Found\n");
}
int main()
{
   int op,ch;
	do
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Search\n");
		printf("Enter Your Option\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:insert();break;
			case 2:Delete();break;
			case 3:display();break;
            case 4:search();break;	
		}
        printf("Do You Want To Continue(Press 1) : ");
        scanf("%d",&ch);
	}while(ch==1);
}

