#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n , x , p;
	cin >> n >> x >> p;
	if((4*x - n) >= p){
		cout<<"PASS\n";
	}
	else{
		cout<<"FAIL\n";
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

