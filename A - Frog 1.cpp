#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int dp[100000];

int main(){
	int n;
	cin >> n;
	int h[n];
	for(int i = 0 ; i < n ; i ++){
		cin >> h[i] ;
	}
	dp[0] = 0;
	dp[1] = abs(h[1] - h[0]);
	for(int i = 2; i<n;i++){
		dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]) , dp[i-2] + abs(h[i] - h[i-2]));
	}
	
	cout<<dp[n-1];
	
return 0;
}

