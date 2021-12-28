/*
  	    eleven_121
author  memoryDestoryer
	    nine_81

Que Link :

*/
#include<iostream>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int q;
	cin >> q;
	 
	int dp[1001] = {0};
	dp[1] = 1;
	dp[2] = 2;
	for(int i=3;i<=1000;i++){
		dp[i] = (dp[i-1] + dp[i-2])%1000000007;
	}
	for(int i=0;i<q;i++){
		int k;
		cin >>k;
		cout<<dp[k]<<"\n";
	} 
	
}

int main(){
	fast
	solve();
return 0;
}

