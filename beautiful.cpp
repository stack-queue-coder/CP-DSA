#include <bits/stdc++.h> 
using namespace std; 

void swap(int ,int);

int main(){
	int n,a[1000000];
	cout<<"enter value of n :";
	cin>>n;
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	for(int i=0;i<n;i++){
		for(int j=i ;j<n;j++){
			if(abs(a[i]-a[j])>1){
				swap(a[i+1],a[j]);
		    }
			else 
			break;	
			
		}
	}
	for(int i=0;i<n;i++){
	
	cout<<a[i];
	}
return 0;
}
void swap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
}
