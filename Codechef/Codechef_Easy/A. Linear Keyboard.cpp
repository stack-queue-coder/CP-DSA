#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	string s , str;
	cin >> s >> str;
	int len = str.length();
	if(len == 1){
		cout<<0<<"\n";
	}
	else{
		int ans =0;
		map<char , int> m;
		for(int i=0;i<26;i++){
			m[s[i]] = i+1;
		}
		int x = str[0];
		for(int i=1;i<len;i++){
			ans  += abs(m[x] - m[str[i]]);
			x = str[i];
		}
		cout<<ans<<"\n";
	}
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

