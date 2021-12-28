#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j]; 
        }
    }
        
//    vector< vector<int> > dp(n , vector<int>(m ,0 ));    
	int dp[n][m];
    for(int i = n-1;i>=0 ; i--){
		for(int j= m-1;j>=0;j--){
			if(i == n-1 && j == m-1){
				dp[i][j] = a[i][j];
			}
			else if(i == n-1){
				dp[i][j] = a[i][j] + dp[i][j+1];
			}
			else if(j == m-1){
				dp[i][j] = a[i][j] + dp[i+1][j];
			}
			else{
				dp[i][j] = a[i][j] + min(dp[i+1][j] , dp[i][j+1]); 	
			}
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<dp[0][0];
	return 0;
	
}
