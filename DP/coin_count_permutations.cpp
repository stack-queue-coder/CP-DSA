#include<bits/stdc++.h>
using namespace std;
#define ll long long

int coin_count_permutations(int n , int a[] , int amt){
	int dp[amt+1] = {0};
	dp[0] = 1;
	for(int i=1;i<= amt;i++){
		for(int j = 0;j<n;j++){
			if(i >= a[j]){
				dp[i] += dp[i-a[j]];	
			}	
		}
	}
	return dp[amt];
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i =0 ; i < n ; i++){
		cin >> a[i];
	}
	int amt;
	cin >> amt;
	
	cout<<coin_count_permutations(n , a , amt);
	
return 0;
}

