#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int k;
	cin >> k;
	string s;
	cin >> s;
	unordered_map<char ,int>ump;
	for(int i=0;i<s.length();i++){
		ump[s[i]]++;
	}
	for(auto ele : ump){
		if(ele.second % k != 0){
			cout<<"-1";
			return 0;
		}
	}
	string str = "";
	for(auto ele: ump){
		int x = ele.second / k;
		while(x--){
			str += ele.first;
		}
	}
	string ans = "";
	while(k--){
	    ans += str;
	}
	cout<<ans;
return 0;
}

