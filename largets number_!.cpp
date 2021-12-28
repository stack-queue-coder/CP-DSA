#include<iostream>
using namespace std;
int  largest(int arr[],int n){
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>arr[0]){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	
	int arr[10],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<largest(arr,n);
	return 0;
}
