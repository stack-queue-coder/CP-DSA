#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int n , m;
	cin >> n >> m;
	int g[n][m];
	for(int i =0 ;i<n;i++){
		for(int j = 0;j<m;j++){
			cin >> g[i][j]; 
		}
	}
	
	int dp[n][m];
	for(int j =m-1 ; j>=0;j--){
		for(int i =0 ; i<n;i++){
			if(j == m-1){
				dp[i][j] = g[i][j];
			}
			else if(i == 0){
				dp[i][j] = max(dp[i][j+1] , dp[i+1][j+1]) + g[i][j];
			}
			else if(i == n-1){
				dp[i][j] = max(dp[i][j+1] , dp[i-1][j+1]) + g[i][j];
			}
			else{
				dp[i][j] = max({dp[i][j+1] , dp[i+1][j+1] , dp[i-1][j+1]}) + g[i][j];
			}
		}
	}
	int maxx = dp[0][0];
	for(int i = 0 ; i<n ;i++){
		maxx = max(maxx , dp[i][0]);
	}
	cout<<maxx;
return 0;
}

