#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll x,y;
		cin >> x>> y;
		ll a,b;
		cin >> a>> b;
		ll ans = 0;
		if(2*a < b){
			ans += (abs(x)+abs(y))*a;
		}
		else{
			ans += (min(abs(x),abs(y)))*b + a*(max(abs(x),abs(y))-min(abs(x),abs(y)));
		}
		cout<<ans<<"\n";
	}
return 0;
}

