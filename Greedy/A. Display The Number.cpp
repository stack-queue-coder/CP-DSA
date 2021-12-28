#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	if(n%2==1){
		cout<<"7";
		n -= 3;
	}
	while(n>0){
		cout<<"1";
		n -= 2;
	}
	cout<<"\n";
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

