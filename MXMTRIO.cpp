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
	int n;
	cin >> n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	ll ans = (a[n-1] - a[0] ) * a[n-2];
	cout<<ans <<"\n";
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

