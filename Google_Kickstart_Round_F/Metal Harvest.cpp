#include<bits/stdc++.h>
using namespace std;
#define ll long long

int loop = 0;

ll chhat(ll a , ll b){
	return (a%b==0) ? (a/b):(a/b)+1;
}

void solve(){
	int n;
	cin >> n;
	ll  k;
	cin >> k;
	set<pair<ll ,ll> > set;
	for(int i =0;i<n;i++){
		ll s,e;
		cin >> s >> e;
		set.insert({s,e});
	}
	ll ans =0;
	ll start_time = 0;
	ll end_time;
	for(auto it : set){
		start_time = max( start_time , it.first);
//		cout<<"start_time :"<<start_time<<"\n";
		ll diff = it.second - start_time;
//		cout<<"diff :"<<diff<<"\n";
		if(diff <0){
			continue;
		}
		ans += chhat(diff , k);
//		cout<<"ans :"<<ans<<"\n";		
		end_time = start_time + chhat(diff , k)*k;
//		cout<<"end_time :"<<end_time<<"\n";
		start_time = end_time;
	}
	cout<<"Case #"<<++loop<<": "<<ans;
//	for(int i =0 ;i<n;i++){	
//		cout<<v[i].second<<" ";				
//	}
}

int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		solve();
//		cout<<"\n";
//	}
	cout<<max({10000000000,20000000000000000,100000000000000000000});
return 0;
}

