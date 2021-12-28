#include<bits/stdc++.h>
using namespace std;
#define long long ll
int main(){
		ll n;
		cin>> n ;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>> a[i];
		}
		 sort(a,a+n);	
		 ll x=0;
		for(ll i=0;i<=n;i++){
			x=max(a[i]*(n-i),x);
		}
		 cout<<x<<"\n";
	return 0;
}

