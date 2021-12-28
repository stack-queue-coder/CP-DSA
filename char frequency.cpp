#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		unordered_map<char , int> um;
		string s;
		cin >> s;
		for(int i=0;i<s.length();i++){
			um[s[i]]++;
		}
		for(auto ele: um){
			cout<<ele.first<<"--->"<<ele.second<<"\n";
		}
	}
return 0;
}

