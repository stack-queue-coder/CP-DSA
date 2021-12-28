#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPow2(ll a){
	ll x = 1;
	while(x < a){
		x *= 2;
	}
	if(x == a){
		return true;
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a , b;
		cin >> a >> b;
		if(isPow2(b)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
return 0;
}

