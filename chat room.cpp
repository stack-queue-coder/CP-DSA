#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isSubseq(const string &s1){
	string s = "hello";
	int j=0;
	for(int i=0;i<s1.length() and j<s.length();i++){
		if(s1[i] == s[j]){
			j++;
		}
	}
	return (j == s.length());
}

void solve(){
	string s;
	cin >> s;
	if(isSubseq(s)){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
}

int main(){
	solve();
return 0;
}

