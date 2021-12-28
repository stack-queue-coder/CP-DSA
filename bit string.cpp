#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin>>n;
	ll x= 1000000007;
	ll ans=n;
	for(ll i=1;i<=n;i++){
		ans=(ans*ans) % x;
	}
	cout<<ans;
	return 0;
}
