#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char box[12][12]; 
int main(){
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> box[i][j];
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(box[i][j] == 'W'){
				if(box[i-1][j] == 'P' || box[i+1][j] == 'P' || box[i][j-1] == 'P' || box[i][j+1] == 'P'){
					ans++;
				}
			}
		}
	}
	cout<<ans;
return 0;
}

