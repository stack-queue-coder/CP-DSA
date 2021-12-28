#include<stdio.h>
using namespace std;

int max(int ,int);
int main()
{
	int n1,n2,n3;
	printf("enter the three numbers:\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	int x=max(max(n1,n2),n3);
	printf("%d is greatest",x);
	return 0;
}

int max(int x,int y){
	if(x>y)
	return x;
	else if(y>x)
	return y;
	else
	printf("nice trick\n");
	return x;
}
