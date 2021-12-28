#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n ,k;
	cin >> n >> k;
	ll j = 1 ;
	ll ans = 0;
	while(k){
		if(k&1!=0){
			ans = (ans+j)%mod;
		}
		k >>=1;
		j = (j*n)%mod;
	}
	cout<<ans<<"\n";
}

int main(){
	fast
	int t;
	cin >> t;
	while(t--){
		 solve();
	}
return 0;
}

