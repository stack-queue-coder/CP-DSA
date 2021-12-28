#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	string s;
	cin >> s;
//	char a[26];
	int sum = 0;
//	for(int i=0;i<26;i++){
//		a[i] = (('a'+i)+12)%26;
//	}
	char c = 'a';
	for(int i=0;i<s.length();i++){	
		sum += min( abs(s[i] - c) , (26 - abs(s[i] - c))) ;
		c = s[i];	
	}
	cout<<sum;
}

int main(){
	fast
	solve();
return 0;
}

