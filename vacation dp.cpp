#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int dp[100000][3];

int main(){
	int n;
	cin >> n;
	int a[n][3];
	for(int i=0;i<n;i++){
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
		}
	}
	dp[0][0] = a[0][0];
	dp[0][1] = a[0][1];
	dp[0][2] = a[0][2];
	
	for(int day = 1; day<n; day++){
		dp[day][0] = a[day][0] + max(dp[day-1][1] , dp[day-1][2]);
		dp[day][1] = a[day][1] + max(dp[day-1][2] , dp[day-1][0]);
		dp[day][2] = a[day][2] + max(dp[day-1][0] , dp[day-1][1]);
	}
		
	cout<<max({dp[n-1][0] , dp[n-1][1] ,dp[n-1][2]});
return 0;
}

