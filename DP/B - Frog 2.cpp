#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n , k;
	cin >> n >> k;
	int a[n+1];
	for(int i =1 ;i <=n;i++){
		cin >> a[i];
	}
	vector<int> dp(n+1 , INT_MAX);
	dp[n] = 0;
	for(int i=n;i>0;i--){
		for(int j = 1; (j<=k) and (i+j<=n) ;j++){
			dp[i] = min( dp[i+j] + abs(a[i] - a[i+j]) , dp[i] );
//			cout<<dp[i]<<" ";
		}
//		cout<<"\n";
	}
	cout<<dp[1];
return 0;
}

