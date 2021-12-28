#include<bits/stdc++.h>
using namespace std;
#define ll long long

int knapsack(int n , int v[], int w[], int cap){
	int dp[n+1][cap+1] = {0};
	for(int i = 0;i<=n;i++){
		for(int j = 0 ; j<=cap;j++){
			if(i == 0){
				dp[i][j] = 0;
			}
			else if(j == 0){
				dp[i][j] = 0;
			}
			else{
				if(w[i-1] > j){
					dp[i][j] = dp[i-1][j]; 
				}
				else{
					int val = j-w[i-1];
					dp[i][j] = max(v[i-1] + dp[i-1][val] , dp[i-1][j]);
				}
			}
		}
	}	
	return dp[n][cap];
}

int main(){
	int n;
	cin >> n;
	int v[n] , w[n] ;
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	for(int i=0;i<n;i++){
		cin >> w[i];
	}
	int cap;
	cin >> cap;
	cout << knapsack(n , v , w , cap);
return 0;
}

