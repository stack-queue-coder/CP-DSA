#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll kLargest(ll a[],ll n,ll k);
int main(){
	ll n,q;
	cin>> n ;
	cin>> q ;
	ll a[n];
	ll c=0;
	for(ll i=0;i<n;i++){
		cin>> a[i] ;
		if(a[i]==1){
			c++;
		}
	}
	while(q--){
	ll t,f;
	cin>> t >>f;
	if(t==1){
		if(a[f-1]==0){
			a[f-1]=1;
			c++;
		}
		else{
			a[f-1]=0;
			c--;
		}
	}
	if(t==2){
		if(c>=f){
			cout<<"1\n";
		}
		else{
			cout<<"0\n";
		}
	}
	
}
return 0;
}
