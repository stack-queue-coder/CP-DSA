#include<bits/stdc++.h>
using namespace std;
int Lsearch(int,int);

int Lsearch(int arr[],int x){
	int right=sizeof(arr);
	for(int i=0;i<right;i++){
		if(arr[i]==x){
			return i+1;
			break;
		}
		else if(arr[--right]==x){
			return right+1;
			break;
		}
	}
	return -1;
}
int main(){
	int n,x;
	int arr[n];
	cin>> n >> x ;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<Lsearch(arr,2);
} 
