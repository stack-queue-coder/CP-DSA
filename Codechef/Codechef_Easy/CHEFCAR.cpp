#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	ll n , v ;
	cin >> n >> v;
	ll x = n*(n-1ll);
	if(v >= n-1ll){
		y = n-1ll;
		cout<< x/2 <<" "<<y<<"\n";
	}
	else{
		ll y = (n-v)*(n-v+1ll);	
		cout<< x/2 <<" " << y/2 +v -1ll<<"\n" ;
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

