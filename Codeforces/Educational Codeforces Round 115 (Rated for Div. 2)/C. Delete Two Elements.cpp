#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	ll a[n];
	ll sum = 0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		sum += a[i];
	}
	sum = sum * 2;
	unordered_map<ll ,ll> m;
	ll cnt = 0;
	for(int i=0;i<n;i++){
		if(sum % n == 0){
			if(m.find(sum/n - a[i]) != m.end()){
				cnt += m[sum/n - a[i]];
			}
			m[a[i]]++;
		}
	}
    cout<<cnt<<"\n";
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

