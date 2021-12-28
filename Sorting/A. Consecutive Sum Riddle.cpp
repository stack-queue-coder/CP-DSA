#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	ll n;
	cin >> n;
	ll l=0 , r=0;
	n*=2;
	if(n==1){
		cout<<0<<" "<<1<<"\n";
		return;
	}
	if(n==2){
		cout<<-1<<" "<<2<<"\n";
		return;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i == 0){
			ll x = (n/i) - (i-1);
			if(x%2==0){
				l = x/2;
				r = l + (i-1);
				cout<<l<<" "<<r<<"\n";
				break;	
			}
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

