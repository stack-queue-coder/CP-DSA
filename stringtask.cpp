#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char toLower(char c){
	if(c >= 'A' and c <= 'Z'){
		return (char(int(c) - 'A' + 'a'));	
	}
	else return c;	
}
bool isVowel(char c){
	c = toLower(c);
	return (c == 'a' || c == 'e' || c== 'i' || c== 'o' || c== 'u' || c== 'y');
}
void solve(){
	string s;
	cin >> s;
	string res = "";
	for(int i=0;i<s.length();i++){
		if(isVowel(s[i])){
			continue;
		}
		res += ".";
		res += toLower(s[i]);
	
	}
	cout<<res<<"\n";
}
int main(){
	solve();
	
return 0;
}

