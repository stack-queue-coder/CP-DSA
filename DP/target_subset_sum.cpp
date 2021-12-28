#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool tar_sum_subset(int n , int a[] , int  tar){
	bool dp[n+1][tar+1] = {false};
	for(int i = 0;i<=n;i++){
		for(int j = 0;j<=tar;j++){
			if(j == 0){
				dp[i][j] = true;
			}
			else if(i == 0 && j!=0){
				dp[i][j] = false;
			}
			else{
				if(dp[i-1][j] == true){
					dp[i][j] = true;
				}
				else{
					int val = a[i-1];
					if(j>=val){
						if(dp[i-1][j-val] == true){
							dp[i][j] = true;
						}
					}
				}
			}
		}
	}
	return dp[n][tar];	
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i =0 ;i<n;i++){
		cin >> a[i];
	}
	int target;
	cin >> target;
	
	cout<< (tar_sum_subset( n , a , target) ? "true" : "false");
		
return 0;
}

