#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n , x;
	cin >> n >> x;
	int v[n];
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	
//	int dp[x+1] = {};
	vector<ll> dp(x+1 , INT_MAX);
	dp[0] = 0;
	for(int i=1;i<=x;i++){
		for(int j = 0;j<n;j++){
			if(i>=v[j]){
				dp[i] = min(dp[i-v[j]] +1 , dp[i] );
			}

		}

	}
	
	(dp[x] == INT_MAX)?cout<<"-1" : cout<<dp[x] ;
return 0;
}

