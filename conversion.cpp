#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){

}
int strtoint(string s){
	int n = s[0] - '0';
	for(int i=1 ; i<s.size(); i++){
		if(s[i] == ' '){
			return n;
		}
		n = n*10 + int(s[i] - '0');
	}
	return n;
}

int main(){
//	fast
	string s = "289 2515 446 66496 484";
	vector<int> v;
	string str;
	for(int i=0;i<s.length();i++){
		str += s[i];
		if(s[i] == ' ' or i == s.length()-1){
			v.push_back(strtoint(str));
			str = "";
			continue;
		}
	}
	for(auto ele:v){
		cout<<ele<<" ";
	}

return 0;
}

