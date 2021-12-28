#include<stdio.h>
int fact(int);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fact(n));
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
