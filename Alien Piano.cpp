#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define INF  1000000;
int main(){
    int t;
    cin >> t;
    int c = 0;
    while(t--){
        int k;
        cin >> k;
        int a[k];
        int dp[k][4]; 
        for(int i = 0;i<k;i++){
            cin >> a[i]; 
        }
        dp[0][0] = dp[0][1] = dp[0][2] = dp[0][3] = 0;
        for(int i=0;i<k;i++){
            for(int j = 0;j<4;j++){
                dp[i][j] = INF;
                for(int z = 0 ; z<4;z++){
                    int rule_broken = 1;
                    if(a[i] > a[i-1] and j > z){
                        rule_broken = 0;
                    }
                    if(a[i] < a[i-1] and j < z){
                        rule_broken = 0;
                    }
                    if(a[i] == a[i-1] and j == z){
                        rule_broken = 0;
                    }
                
                    dp[i][j] = min(dp[i][j] , dp[i-1][z] + rule_broken);
                }
            }
        }
        int ans = min({dp[k-1][0],dp[k-1][1],dp[k-1][2],dp[k-1][3]});
        cout<<"Case #"<<++c<<": "<<ans<<"\n";
    }
}
