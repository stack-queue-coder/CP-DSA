#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	sort(v.begin() , v.end());
	if(n == 1){
		cout<<"YES\n";
		return ;
	}
	for(int i= 0;i<n-1;i++){
		if(abs(v[i] - v[i+1])  > 1){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
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

