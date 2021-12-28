#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main(){
	ll n;
	cin >> n;
	vector<ll> dp(n+1,0);
	// base case
	dp[0] = dp[1] = 1;
	for(int i = 2;i<=n;i++){
		for(int j = 1;j<=6;j++){
			if((i-j)>=0){
				dp[i] = dp[i]%mod + dp[i-j]%mod;
			}
		}
	}
	cout<<dp[n]%mod;
return 0;
}

