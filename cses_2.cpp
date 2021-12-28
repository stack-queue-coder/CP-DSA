#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[200000],sum=0;
	cin>>n;
	for(int i=0;i<n-1;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		sum=sum+a[i];
	}
	cout<<((n*(n+1))/2)-sum;
return 0;	
}
