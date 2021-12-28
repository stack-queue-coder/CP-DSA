#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int x =1;
	for(int i=0;i<n/2;i++){
		if(a[i] == a[n-1-i] ){
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
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

