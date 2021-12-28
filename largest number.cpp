#include<iostream>
#include<algorithm>
using namespace std;
int largest(int arr[],int n){
	
	return *max_element(arr,arr+n);
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
