#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll search(ll , ll);
int main(){
	ll x,y;
	int t;
	cin>>t;
	while(t--){
		cin>> x >> y;
		cout<<search(x,y)<<"\n";
	}
	return 0;
}

ll search(ll x,ll y){
	
	if(x>y){
		ll m=(x-1)*(x-1)+1;
		if(x%2!=0){
			for(ll i=1;i<y;i++){
				m++;
			}
			return m;
		}
		else{
			ll m=x*x;
			for(ll i=1;i<y;i++){
				m--;
			}
			return m;
		}
	}
	else if(y>x){
		if(y%2!=0){
			ll m=y*y;
			for(ll i=1;i<x;i++){
				m--;
			}
			return m;
		}
		else{
			ll m=(y-1)*(y-1)+1;
			for(ll i=1;i<x;i++){
				m++;
			}
			return m;
		}
	}
	else{
		return (x*x-(x-1));
	}
}
