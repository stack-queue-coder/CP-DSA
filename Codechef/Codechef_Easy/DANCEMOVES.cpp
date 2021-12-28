#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int x , y;
	cin >> x >> y;
	int ans;
	if(x >= y){
		ans = x - y;
	}
	else{
		if((y-x)%2 == 0){
			ans = (y-x)/2;
		}
		else{
			ans = (y-x)/2 + 2;
		}
	}
	cout<<ans<<"\n";
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

