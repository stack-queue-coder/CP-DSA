#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	ll n; 
	int k;
	cin >> n >> k;
	ll a[k+1];
	set<ll , greater<ll> >s;
	for(int i=0;i<k;i++){
		ll x;
		cin >> x;
		s.insert(x);
	}
	ll t = 0;
	ll ans = 0 ;
	for(auto ele:s){
		if(ele >= t){
			ans++;
			t += (n-ele);
		}
		break;
		
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

