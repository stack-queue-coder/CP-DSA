#include<bits/stdc++.h>
void dectoBin(int,vector<int>);
void display(vector<int>);
int main(){
	int x;
	vector<int> a;
	printf("enter number:\n");
	scanf("%d",&x);	

	dectoBin(x,a[]);
	display(a[]);
	return 0;
}
void dectoBin(int x,vector<int> a){
	for(int i=31;i<=0;i--){
		a[i]=x%2;
		x/=2;
	}
}
void display(vector<int> a){
	for(int i=0;i<32;i++){
		printf("%d",a[i]);
	}
}
