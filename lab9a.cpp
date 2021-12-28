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
int main()
{
	int n,ch,count=0;
	printf("Enter The LinkList Nos.\n");
	do
	{
		insert();
		printf("Want To Enter One More Element press 1 : ");
		scanf("%d",&ch);
	}while(ch==1);
	printf("Enter The Value Of Index : ");
	scanf("%d",&n);
	temp=head;
	while(temp!=NULL)
	{
		if(count==n)
		{
			printf("Element At index %d is %d ",n,temp->data);
			exit(0);
		}
		temp=temp->link;

		count++;
	}
	printf("Element Not Found !!");
}
