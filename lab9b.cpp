#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node* link;
}*head1=NULL,*head2=NULL,*newnode,*temp1,*temp2,*prev;
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
void insert1()
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
            if(head1==NULL)
            {
                head1=newnode;
                temp1=newnode;
            }
            else
            {
                head1->link=newnode;
                head1=head1->link;
            }
            
        }
}
void insert2()
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
            if(head2==NULL)
            {
                head2=newnode;
                temp2=newnode;
            }
            else
            {
                head2->link=newnode;
                head2=head2->link;
            }
            
        }
}
void display()
{
   	head1=temp1;
    while(head1!=NULL)
    {
        printf("%d  ",head1->data);
        head1=head1->link;
    }
    printf("\n");
    head1=temp1;
}
int main()
{
	int ch;	
	printf("Enter The LinkList L1\n");
	do
	{
		insert1();
		printf("Want To Enter One More Element press 1 : ");
		scanf("%d",&ch);
	}while(ch==1);
	head1=temp1;
	printf("Enter The LinkList L2\n");
	do
	{
		insert2();
		printf("Want To Enter One More Element press 1 : ");
		scanf("%d",&ch);
	}while(ch==1);
	head2=temp2;
	do
	{
		printf("1.Concatenate two linked lists L1 and L2.\n");  
		printf("2.Union of two linked lists L1 and L2.\n");
		printf("3.Intersection of two linked list L1 and L2.\n");
		printf("Enter CHoice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	while(head1->link!=NULL)
					{
						head1=head1->link;	
					}
					head1->link=head2;
					display();
					head1->link=NULL;
					temp1=head1;
					break;
			case 2: while(head1!=NULL)
					{
						head2=temp2;
						while(head2!=NULL)
						{
							if(head1->data==head2->data)
							{
								printf("%d ",head1->data);
								break;
							}
							head2=head2->link;
						}
						if(head2==NULL)
						printf("%d ",head1->data);
						head1=head1->link;
					}
					head2=temp2;
					head1=temp1;
					while(head2!=NULL)
					{
						head1=temp1;
						while(head1!=NULL)
						{
							if(head2->data==head1->data)
							break;
							head1=head1->link;
						}
						if(head1==NULL)
						printf("%d ",head2->data);
						head2=head2->link;
					}
					head1=temp1;
					head2=temp2;
					break;
			case 3:	while(head1!=NULL)
					{
						head2=temp2;
						while(head2!=NULL)
						{
							if(head1->data==head2->data)
							{
								printf("%d	",head1->data);
							}
							head2=head2->link;
						}
						head1=head1->link;
					}
					head1=temp1;
					head2=temp2;
					break;
		}
		printf("Want to Continue :");
		scanf("%d",&ch);
	}while(ch==1);


}

