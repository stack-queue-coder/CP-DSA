#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	ll n;
	cin >> n;
	for(int i=2;i*i<=n;i++){
		ll x = n - (i*(i-1))/2;
		if(x%i == 0){
			cout<<x/i<<" "<<(x/i) + i -1<<"\n";
			break;
		}
	}
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

