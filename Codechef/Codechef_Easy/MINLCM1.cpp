#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	ll x , k ;
	cin >> x >> k;
	ll maxlcm = (k*x)*((k*x)-1);
	ll minlcm = (2*x);
	cout<<minlcm <<" "<<maxlcm<<"\n";
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

