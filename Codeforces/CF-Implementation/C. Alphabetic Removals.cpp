#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n , k;
	cin >>  n>> k;
	string s;
	cin >> s;
	vector<pair<char , int> > v(n);
	map<char , int>m;
	for(int i=0;i<n;i++){
		m[s[i]]++;
	}
	int x=0;
	for(auto ele:m){
		x += ele.second;
		m[ele.first] = x;	
	}
	for(int i=n-1;i>=0;i--){
		v[i] = {s[i] , m[s[i]]--};
	}
	string str ;
	for(auto it:v){
		if(it.second <= k){
			continue;
		}
		str += it.first;
	}
	cout<<str;
}

int main(){
	fast
 	solve();
return 0;
}

