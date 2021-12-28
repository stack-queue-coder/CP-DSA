#include<stdio.h>
#include<string.h>
int main()
{
	char a[20][20],b[20];
	int c[20],n,i,j;
	printf("enter the number of strings");
	scanf("%d",&n);
	printf("enter the given strings");
	for(i=0;i<n;i++)
	{
	scanf("%s[^\t]",a[i]);	
	c[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strlen(a[i])>strlen(a[j]))
			{
				strcpy(b,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],b);
			}
		}
	}
	printf("ascending order of the lengths of the string\n");
	for(i=0;i<n;i++)
	printf("%s\n",a[i]);
}

