#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(const string &s){
	int c=0;
	for(int i=0;i<s.length();i++){
		if(s[i] < 'a'){
			c++;
		}
	}
	if(c == s.length()){
		string str = "";
		char ch;
		for(int i=0;i<s.length();i++){
			ch = char(s[i] - 'A' + 'a'); 
			cout<<ch;
			str += ch ;
		}		
//		cout<<str;
	}
	else if(c == s.length()-1 and s[0] >= 'a'){
		string str = "";
		char ch;
		str += char(s[0] - 'a' + 'A');
		for(int i=1;i<s.length();i++){
			ch = char(s[i] - 'A' + 'a'); 
			str += ch ;
		}
		cout<<str;
	}
	else cout<<s;
}


int main(){
	string s;
	cin >> s;
	solve(s);	
return 0;
}

