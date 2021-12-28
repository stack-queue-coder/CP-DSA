#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	string s;
	cin >> s;
	int x = s.length();
	string str;
	if(s[0] == s[x-1]){
		cout<<s<<"\n";
	}
	else if(s[0] == 'a' and s[x-1] == 'b'){
		str += 'b';
		for(int i=1;i<x;i++){
			str += s[i];
		}
		cout<<str<<"\n";
	}
	else if(s[0] == 'b' and s[x-1] == 'a'){
		str += 'a';
		for(int i=1;i<x;i++){
			str += s[i];
		}
		cout<<str<<"\n";
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

