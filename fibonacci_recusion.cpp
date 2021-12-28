#include<bits/stdc++.h>
using namespace std;
#define ll long long

int f(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	else
		return f(n-1) + f(n-2);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
//		cout<<f(n)<<"\n";
		
		int dp[n+1];
		dp[0] = 0;
		dp[1] = 1;
		for(int i=2;i<=n;i++){
			dp[i] = dp[i-1] + dp[i-2];
		}
		cout<<dp[n];
	}
return 0;
}

