#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	ll a , b ,c;
	cin >> a >> b >> c;
	int ans = 0;
	if(((a + 2*b + 3*c))%2==0){
		ans = 0;
	}
	else{
		ans = 1;
	}
	cout<<ans<<"\n";
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

