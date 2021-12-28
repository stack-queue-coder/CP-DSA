#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	ll x = 2;
	cout<<1<<" "<<1<<" ";
	for(int i=1;i<n;i++){
		cout<<x<<" ";
		x = x<<1;
	}
	cout<<"\n";
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

