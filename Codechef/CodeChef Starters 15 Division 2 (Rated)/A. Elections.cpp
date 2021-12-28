#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int a ,b , c;
	cin >> a >> b >>c ;
	
	
	cout<<max((max(c,b)-a)+1 , 0)<<" "<<max((max(a,c)-b)+1 , 0)<<" "<<max((max(a,b)-c)+1 , 0)<<"\n";
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

