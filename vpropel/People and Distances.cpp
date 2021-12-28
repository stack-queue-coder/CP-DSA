/*
  	    eleven_121
author  memoryDestoryer
	    nine_81

Que Link :

*/
#include<iostream>
#include <utility>
#include <vector>
#include <iterator>
#include <map>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n , m;
	cin >>  n >> m;
	vector<string> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	vector<pair<int ,int> > p;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(v[i][j] == '1'){
				p.push_back({i,j});
			}
		}
	}
	map<int,int> mp;
	int x = p.size();
	for(int i=0;i<x;i++){
		for(int j=i+1;j<x;j++){
			int man = abs(p[i].first - p[j].first) + abs(p[i].second - p[j].second);
			cout<<man<<"---"<<"\n";
			mp[man]++;
		}
	}
	
	int q;
	cin >> q;
	for(int i=0;i<q;i++){
		int a;
		cin >> a;
		cout<<mp[a]<<"\n";
	}
}

int main(){
	fast;
	solve();
return 0;
}

