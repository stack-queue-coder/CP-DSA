
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
	    cin >> n;
	    int coins[n];
	    for(int i=0;i<n;i++){
	        cin >> coins[i];
	    }
	    int amt;
	    cin >> amt;
	    
	    int dp[amt + 1] = {0};
	    dp[0] = 1;
	    
	    for(int i =0 ;i<n;i++){
	        for(int j=coins[i] ; j<=amt;j++){
	            dp[j] += dp[j - coins[i]];
	            cout<<dp[j]<<" ";
	        }
	        cout<<"\n";
    	}
    	cout<<dp[amt]<<"\n";
	}
return 0;
}

