#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll ans = 0;
		for(ll i=0 ;i<= n/2;i++){
			ans += 8*i*i;
		}
		cout<<ans<<"\n";
//		for (ll i = 1; i <= n / 2; i++) {
//					ans += 8*(i * i);
//				}
//				cout << ans<< endl;
	}
return 0;
}

