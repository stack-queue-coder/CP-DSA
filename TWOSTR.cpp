#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	string s1 , s2;
	cin >> s1 >> s2;
	for(int i=0;i<s1.length();i++){
		if(s1[i] == '?' or s2[i] == '?'){
			continue;
		}
		else{
			if(s1[i] != s2[i]){
				cout<<"No\n";
				return;
			}
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

