#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		string a,b;
		cin >> a>> b;
	
			int n = a.length();
			int m = b.length();
			int dp[n+1][m+1];
			int maxvalue = 0;
			for(int i=0;i<=n;i++){
				for(int j=0;j<=m;j++){
					dp[i][j] = 0;
				}
			}
			for(int i=1;i<=n;i++){
				for(int j=1;j<=m;j++){
					if(a[i-1] == b[j-1]){
						dp[i][j] = 1 + dp[i-1][j-1];
						maxvalue = max(maxvalue , dp[i][j]);
					}
				}
			}
		cout<<(n+m)-(2*maxvalue)<<"\n";
	}
return 0;
}

