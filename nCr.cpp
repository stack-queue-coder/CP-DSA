#include<stdio.h>
using namespace std;

int fact(int);
int nCr(int,int);
int main(){
	int n,r;
	printf("enter the parameters n and r for nCr respectively:\n");
	scanf("%d%d",&n,&r);
	int x= nCr(n,r);
	//printf("%dC%d = %d",n,r,x);
	printf("%d",fact(3));
	
	return 0;
}
int fact(int n){
	int x=1;
	for(int i=n;i>0;i--){
		if(n==0)
		break;
		else
		x=x*i;
		
	}
	return x;
}
int nCr(int n, int r){
	return fact(n)/(fact(r)*fact(n-r));
}

