/*
  	    eleven_121
author  memoryDestoryer
	    nine_81

Que Link :

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int m , n;
	cin >> m>> n;
	unordered_map<char , int> mp;
	for(int i=0;i<n;i++){
		char c;
		cin >> c;
		int v;
		cin >>v;
		mp[c] = v;
	}
	int t;
	cin >> t;
	char x;
	cin >> x;
	int p = 0;
	while( (t + 'A' - 1) != x){
		p++;
		t = mp[t + 'A' - 1];
	}
	float ans = 100 - 2*p;
	printf("%.2f",(m*ans)/100);
}

int main(){
	solve();
return 0;
}

