#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	ll x , n;
	cin >> x >> n;
	ll ans = 0;
	ll t = (n/4);
		if(n == 0){
			cout<<x<<"\n";
			return;
		}
		else if(n%4==0){
			if(x%2==0){
				ans = -4*t + n - 2;
			}
			else{
				ans = 4*t - n + 2;
			}
		}
		else if(n%4 == 1){
			if(x%2==0){
				ans = -t*4 + 1;
			}
			else{
				ans =  4*t - 1;
			}
		}
		else if(n%4==2){
			if(x%2==0){
				ans = -t*4 + 1 - n;
			}
			else{
				ans = t*4 - 1 + n;
			}
		}
		else if(n%4==3){
			if(x%2==0){
				ans = -t*4 - 2*n;
			}
			else{
				ans = t*4 + 2*n;
			}
		}
		cout<<ans + x<<"\n";
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

