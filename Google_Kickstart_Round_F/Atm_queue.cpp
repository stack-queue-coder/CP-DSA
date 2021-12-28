#include<bits/stdc++.h>
using namespace std;
#define ll long long

int loop = 0;

bool comp(pair<ll , int> a , pair<ll , int> b){
	if(a.first != b.first){
		return a.first < b.first;
	}
	return a.second < b.second;
} 

void solve(){
	int n ;
	ll x;
	cin>> n >> x;
	ll a[n];
	for(int i =0 ;i<n; i++){
		cin >> a[i];
	}
	vector< pair<ll , int> > v(n);
	for(int i =0;i<n;i++){
		ll k = ceill(a[i]/x);
		v[i] = {k , i+1};
		cout<<v[i].first<<" ";
	}
	sort(v.begin() , v.end() , comp);
	cout<<"Case #"<<++loop<<": ";
	for(int i =0 ;i<n;i++){	
		cout<<v[i].second<<" ";				
	}
//	cout<<"Case #"<<++loop<<": "<<ans<<"\n";
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

