#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
int main(){
	ll n,sum=0;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n-1;i++){
		cin>>a[i];
	}
	for(ll i=0;i<n-1;i++){
		sum=sum+a[i];
	}
	cout<<((n*(n+1))/2)-sum;
return 0;	
}
