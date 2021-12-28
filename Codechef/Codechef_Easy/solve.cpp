#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int a[] = {1,2,3,4,5,6};
	for(int i =0 ; i < 6; i++){
		if(a[i] == 6){
			cout<<"YES\n";
		}
	}
	if(i == 6){
		cout<<"NO";
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

