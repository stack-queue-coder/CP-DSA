#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll a[n];
		unordered_map<ll,ll> u;
		for(ll i = 0 ;i < n ; i ++ ){
			cin >> a[i];
			u[a[i]]++;
		}
		ll sum = (n)*(n-1)/2;
		for(auto ele:u){
			if(ele.second > 1){
				ll d = ele.second ; 
				sum -= (d*(d-1)/2);
			}
		}
		cout<<2*sum<<"\n";
	}
return 0;
}

