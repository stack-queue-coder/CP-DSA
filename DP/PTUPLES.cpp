#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<ll> prime(1000001 , 1);
vector<ll>ans(1000001 , 0);
void pre(){
	for(ll i=2;i<=1000000;i++){
		if(prime[i]){
			for(ll j = i*i;j<=1000000;j+=i){
				prime[j] = 0;
			}
		}
	}
	ll cnt = 0;
	for(ll i=5;i<=1000000;i++){
		if(prime[i] and prime[i-2]){
			cnt ++;
		}
		ans[i] = cnt;
	}
}
//void solve(){
//	
//}

int main(){
	pre();
	fast
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout<<ans[n]<<"\n";
	}
return 0;
}

