#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fun(ll n){
	ll x = 0;
	while(n){
		n /= 5;
		x += n;
	}
	return x;
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout<<fun(n)<<endl;
	}
return 0;
}

