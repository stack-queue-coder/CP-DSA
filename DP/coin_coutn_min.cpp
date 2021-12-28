#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll csmin(int n , int a[]){
    vector<ll>dp(n+1 , INT_MAX);
    dp[n] = 0;
    for(int i=n-1;i>=0;i--){
    	if(a[i] > 0){
    		for(int j = 1; (j<=a[i])&&(i+j)<=n ; j++){
            	dp[i] =	min(dp[i+j] , dp[i]);
        	}
			dp[i]++;	
		}
		else{
			dp[i] = INT_MAX;
		}
     
    }
    return dp[0];
}


int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i =0 ; i < n ; i++){
	    cin >> a[i];
	}
	cout << csmin(n,a);
return 0;
}

