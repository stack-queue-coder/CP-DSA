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
	ll l[3];
	for(int i=0;i<3;i++){
		cin >> l[i];
	}
	sort(l,l+3);
	if((l[0] + l[1] == l[2]) or ( (l[0] == l[1]) and (l[2]%2==0) ) or ((l[1] == l[2]) and (l[0]%2==0)) ){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
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

