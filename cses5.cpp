#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1000000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		if((a[i+1]-a[i])>1){
		cout<<"5";
	}
	}
	return 0;
}
