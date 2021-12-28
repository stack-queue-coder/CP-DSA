#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);



void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	for(int i=1;i<n;i++){
		if( (s[i] =='L' and s[i-1] == 'L') or (s[i] == 'R' and s[i-1] == 'R') ){
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
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

