#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	string str;
	for(int i =0 ;i<s.length();i++){
		if(s[i] == ','){
			str+=" ";
		}
		if(s[i] == ' '){
			str+="";
		}
		else{
			str+=s[i];
		}
	}
	cout<<str;
return 0;
}

