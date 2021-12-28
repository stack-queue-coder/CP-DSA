#include<bits/stdc++.h>
using namespace std;
#define ll long long

int loop = 0;

ll pahad(ll a , ll b){
	return (a>b)? a : b;
}

bool comp(ll a ,ll b){
	return a>b;
}

void solve(){
	ll d, n, k;
	cin >> d >> n >> k;
	ll h[n] , s[n] , e[n];
	for(ll i=0;i<n;i++){
		cin >> h[i] >> s[i] >> e[i];
	}
	ll ans =0;
	ll cnt;
	for(ll i=1;i<=d;i++){
// 		cout<<"\nDay"<<i<<" ";
// 		set<ll , greater<ll> >set;
        vector<ll> v;
		for(ll j=0;j<n;j++){
// 			cout<<"Ride"<<j+1<<" ";
			if(i >= s[j] and i<=e[j]){
			    v.push_back(h[j]);
//				 set.insert(h[j]);		
				// cout<<h[j]<<" ";
			}
		}
// 		cout<<"\n";
		ll sum = 0;
		cnt = k;
		sort(v.begin() , v.end() , comp);
		for(auto ele:set){
			if(cnt--){
				sum+=ele;
			}
			else{
				break;
			}
		}
		ans = pahad(ans , sum);
// 		cout<<"ans "<<ans<<"\n";	
	}
	cout<<"Case #"<<++loop<<": "<<ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout<<"\n";
	}
return 0;
}

