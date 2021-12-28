#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	ll n;
	cin >> n;
	ll i = 4;
	while(n%(i-1) != 0){
		i = i<<1;
	}
	cout<<n/(i-1)<<"\n";
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

