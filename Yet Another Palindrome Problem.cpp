#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+2;j<n;j++){
				if(a[i] == a[j]){
					cout<<"YES\n";
					goto end;
				}
			}
		}
		cout<<"NO\n";
		end : ;
	}
return 0;
}

