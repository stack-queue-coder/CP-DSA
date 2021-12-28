#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;  

int solve(ll,ll,ll);

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);

	ll t;
	ll a[t];
	cin>>t;
	while(t--){
		ll x,y;
		cin>>y;
		cin>>x;
	    ll z=max(x,y);
		a[--t]=solve(y,x,z);
	}
	while(t--){
		ll i=0;
		cout<<a[i++]<<"\n";
	}
return 0;
}
int solve(ll y,ll x,ll z){
		
	ll a[z][z];
	ll k=0;
	
	    for(ll i=0;i<z;i++){
		    ll m=2*i+1;
		    for(ll j=0;j<(2*i+1);j++){
			    if(i%2!=0){
				    a[i][j]=++k;
		 		}
				else{
					a[i][--m]=++k;
				}
			}
		}
		if(y<x){
			return a[x-1][y-1];
		}
		else{
			return a[y-1][2*y-x-1];
		}
}
