#include<stdio.h>
int stack[10],size,top=-1;
void push()
{
    int a;
    if(top==size-1)
    {
        printf("Stack Is Full!!!!!\n");
        return;
    }
    else
    {
        printf("Enter The Element : ");
        scanf("%d",&a);
        stack[++top]=a;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is Empty!!!!\n");
        return;
    }
    else
    {
        printf("%d",stack[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is Empty!!!!\n");
        return;
    }
    else
    {
        for(int i=0;i<=top;i++)
        printf("%d  ",stack[i]);
    }
}
void peak()
{
    if(top==-1)
    {
        printf("Stack is Empty!!!!");
        return;
    }
    else
    printf("%d",stack[top]);
}
void main()
{
    int a,ch,c;      
    printf("Enter the size of element : ");
    scanf("%d",&size);
    do
   {
    printf("Enter Your Choice : \n1.Push.\n2.Pop.\n3.Display.\n4.Peak.\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:{push();break;}
        case 2:{pop();break;}
        case 3:{display();break;}
        case 4:{peak();break;}
    }
    printf("Do You Want To Continue (Press 1): ");
    scanf("%d",&c);
   }while(c==1);
}

