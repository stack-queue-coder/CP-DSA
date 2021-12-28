#include<stdio.h>
#include<string.h>
int main(){
	char *a[3];int i;
char b[10];
for(i=0;i<3;i++)
{
	scanf("%s",b);
	a[i]=b;
}
printf("%s\n%s\n%s",a[0],a[1],a[2]);
}
