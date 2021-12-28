#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,w,wr;
		cin >> n >> w >> wr;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		if(wr >= w){
			cout<<"YES\n";
		}
		else{
			if(n%2==0){
				if((w - wr) <= n){
					cout<<"YES\n";
				}
				else{
					cout<<"NO\n";
				}
			}
			else if(n%2!=0){
				if((w - wr) <= n-1){
					cout<<"YES\n";
				}
				else{
					cout<<"NO\n";
				}
			}
		}
	}
return 0;
}

