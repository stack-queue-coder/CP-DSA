#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(const string &s1,const string &s2){
	if(s1.length() != s2.length()){
		return false;
	}
	char a[26]={0};
	for(int i=0;i<s1.length();i++){
		a[s1[i] - 'a']++;
		a[s2[i] - 'a']--;
	}
	for(int i=0;i<26;i++){
		if(a[i] != 0){
			return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1,s2;
		cin >> s1>> s2;
		cout<<solve(s1,s2);
	}
return 0;
}

