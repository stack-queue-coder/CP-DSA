#include<stdio.h>
int bubblesort()
{
int i,n,a[100],k,temp,j;
printf("enter the number of elements:\n");
scanf("%d",&n);
printf("enter the value of k:\n");
scanf("%d",&k);
printf("enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
if(i==k-1)
printf("the element at %dnd position is %d:\n",k,a[k-1]);
}
}
int selectsort()
{
int a[100],i,j,k,n,min,l;
printf("enter the no of elements:\n");
scanf("%d",&n);
printf("enter the value of k:\n");
scanf("%d",&k);
printf("enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
min=a[i];
for(j=i+1;j<n;j++)
{
if(min>a[j])
{
min=a[j];
l=j;
}
}
if(min!=a[i])
{
a[l]=a[i];
a[i]=min;
}
}
for(l=0;l<n;l++)
{
if(l==k-1)
printf(" the element at %dnd position is %d:\n",k,a[k-1]);
}
}
int insertsort()
{
int a[100],i,j,k,n,temp;
printf(" enter the no of elements:\n");
scanf("%d",&n);
printf("enter the value of k:\n");
scanf("%d",&k);
printf("enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while((temp<a[i])&&(j>=0))
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}
for(j=0;j<n;j++)
{
if(j==k-1)
printf("element at %dnd position %d:\n",k,a[k-1]);
}
}
int main()
{
int y;
printf("1=use bubble sort\n2=use selectionsort\n3=use insertion sort\n");
scanf("%d",&y);
if(y==1)
{
bubblesort();
}
else if(y==2)
{
selectsort();
}
else if(y==3)
{
insertsort();
}
}

