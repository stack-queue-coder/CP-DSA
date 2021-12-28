#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n , x;
	cin >> n >> x;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	vector<int> v = a;
	sort(v.begin() , v.end());
	bool flag = true;
	for(int i=(n-1)-x + 1;i<x;i++){
		if(v[i]!=a[i])flag = false;
	}
	if(flag)cout<<"YES\n";
	else cout<<"NO\n";
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

