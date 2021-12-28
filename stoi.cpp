	#include<bits/stdc++.h>
	#include <sstream>
	using namespace std;
	#define ll long long
	#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	void solve(){
		string s = "19629";
	//	string str = s[1]+s[2];
		cout<<10*(s[2]-'0') + (s[1]- '0');
	}
	
	int main(){
		fast
		int t;
		cin >> t;
		while(t--){
			 solve();
		}
	return 0;
	}

