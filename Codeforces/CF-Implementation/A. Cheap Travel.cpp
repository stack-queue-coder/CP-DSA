#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n, m , a, b;
	cin >> n >> m >> a >> b;
	if(m*a <= b){
		cout<<n*a;
	}
	else{
		cout<<(n/m)*b + min( (n%m)*a  , b ); 		
	}
}

int main(){
	fast
	solve();
return 0;
}

