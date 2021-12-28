#include<iostream>

using namespace std;
int main(){
	int n;
	cout<<"enter the no. of elements in array";
	cin>>n;
	
	int *p=new int [n];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	for(int i=0;i<n;i++){
		cout<<p[i];
	}
}
