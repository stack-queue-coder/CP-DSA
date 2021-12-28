#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n , cap;
	cin >>  n >> cap;
	int w[n];
	ll v[n];
	for(int i = 0; i < n ; i++ ){
		cin >> w[i] >> v[i];
	}
	ll dp[n+1][cap+1] = {0};
	for(int i = 0;i<=n;i++){
		for(int j = 0;j<=cap;j++){
			if(i==0 || j ==0 ){
				dp[i][j] = 0;
			}
			else{
				if(j>=w[i-1]){
					dp[i][j] = max( dp[i-1][j] , dp[i-1][j-w[i-1]] + v[i-1]); 
				}
				else{
					dp[i][j] = dp[i-1][j];
				}	
			}
//			cout<<dp[i][j]<<" ";
		}
//		cout<<"\n";
	}
	cout<<dp[n][cap];
return 0;
}

