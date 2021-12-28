#include <iostream>
using namespace std;

int cs1(int n) {
  // write your code here
  int dp[n+1] = {0};
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  for(int i = 4;i<=n;i++){
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
  }
  return dp[n];
}

int cs(int n , int dp[]){
    
    if(n == 0){
        return 1;
    }
    else if(n < 0){
        return 0;
    }
    if(dp[n] > 0){
        return dp[n];
    }
    
    int p1 = cs(n-1 , dp);
    int p2 = cs(n-2 , dp);
    int p3 = cs(n-3 , dp);
    
    dp[n] = p1+p2+p3;
    return dp[n];
}

int main() {
  int n;
  cin >> n;
  int dp[n+1] = {0};
  cout << cs(n ,dp ) << endl;
  return 0;
}
