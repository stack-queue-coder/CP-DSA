#include<bits/stdc++.h>
using namespace std;
#define ll long long

int knapsack(int n , int v[] , int w[] , int cap){
	
	int dp[cap+1]={0};
	for(int i=1;i<=cap;i++){
		int maxx = 0;
		for(int j=0;j<n;j++){
			if(w[j] <= i){
				maxx = max( dp[i-w[j]] + v[j] , maxx);
			}
		}
		dp[i] = maxx;
//		cout<<dp[i]<<" ";
	}
	return dp[cap];
}

int main(){
	int n;
	cin >> n;
	int v[n]  , w[n];
	for(int i =0 ;i<n;i++){
		cin >> v[i];
	}
	for(int i =0 ;i<n;i++){
		cin >> w[i];
	}	
	int cap;
	cin >> cap;
	cout<< knapsack(n , v , w , cap);
return 0;
}

