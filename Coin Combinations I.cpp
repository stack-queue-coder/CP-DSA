#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
	ll n , x;
	cin >> n >> x;
	vector<ll> dp(x+1,0);
	dp[0] = 1;
	vector<ll> coins(n);
	for(int i = 0 ; i < n ; i ++ ) cin >> coins[i];
	
	for(int i = 1 ;i<=x;i++){
		for(auto ele : coins){
			if(ele<=i){
				dp[i] = dp[i]%mod  + dp[i-ele]%mod;
			}
		}
	}
	// base case 
	cout<<dp[x]%mod;
return 0;
}

