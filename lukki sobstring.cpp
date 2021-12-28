#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	unordered_map<char,int> u;
	for(int i=0;i<s.length();i++){
		u[s[i]]++;
	}
	if(u['4'] == 0 and u['7'] == 0){
		cout<<"-1";
	}
	else if(u['4'] >= u['7']){
		cout<<"4";
	}	
	else{
		cout<<"7";
	}
return 0;
}

