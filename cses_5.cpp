#include <bits/stdc++.h> 
using namespace std; 

void swap(int ,int);

int main(){
	int n,a[1000000];
	cin>>n;
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	for(int i=0;i<n;i++){
		for(int j=i ;j<n;j++){
			if(abs(a[i]-a[j])>1){
				swap(a[i+1],a[j]);
			}
		}
	}
	return 0;
}
void swap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
}
