#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	int a[n][5];
	for(int i=0;i<n;i++){
		for(int j=0;j<5;j++){
			cin >> a[i][j];		
		}
	}
	bool ans = false;
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			int A=0 , B=0 , AoB =0 ;
			bool flag = true;
			for(int k = 0 ;k<n;k++){
				if(a[k][i] == 1 and a[k][j] == 1){
					AoB ++;
				}
				else if(a[k][i] == 1){
					A++;
				}
				else if(a[k][j] == 1){
					B++;
				}
				else{
					flag = false;
				}
			}
			if(flag){
				for(int x = 0 ; x<=AoB;x++){
					if((A + x) >= n/2 and (B+AoB - x)>=n/2){
						ans = true;
					}
				}
			}
		}
	}
	cout << (ans ? "YES\n" : "NO\n");
}

int main(){
	fast
	int t;
	cin >> t;
	while(t--){
		 solve();
	}
return 0;
}

