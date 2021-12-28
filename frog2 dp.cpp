#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll INF=  1000000;
ll dp[100000];

int main(){
	ll n, k;
	cin >> n >> k;
	ll h[n];
	for(ll i = 0 ; i < n ; i ++){
		cin >> h[i] ;
		dp[i] = INF;
	}
	dp[0] = 0;
	dp[1] = abs(h[0] - h[1]);
	for(ll i = 2; i<n;i++){
		for(ll j = 1; j<=k ; j++){
			if(j>i)continue;
			dp[i] = min(dp[i-j] + abs(h[i] - h[i-j]) , dp[i]);
		}
	}
	cout<<dp[n-1];
return 0;
}

