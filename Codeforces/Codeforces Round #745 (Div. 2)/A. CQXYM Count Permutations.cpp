#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){	
	int n;
	cin >> n;
	n *= 2;
	ll ans = 1;
	for(int i=3;i<=n;i++){
		ans = (ans%mod * i )%mod;
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

