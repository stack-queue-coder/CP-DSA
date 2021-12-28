#include<bits/stdc++.h> 
using namespace std; 


int main(){
	int n,a[10];
	cout<<"enter value of n :";
	cin>>n;
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1 ;j<n;j++){
			if(abs(a[i]-a[j])>1){
				int temp=a[i+1];
				a[i+1]=a[j];
				a[j]=temp;
				break;
		    }
				
			
		}
	}
	for(int i=0;i<n;i++){
	
	cout<<a[i];
	}return 0;
}

